#include <llvm/IR/Function.h>
#include <vector>
#include "node.h"
#include "IR_generator.h"

namespace ncc {

class IRGenerator;

llvm::Value *NBlock::GenIR(ncc::IRGenerator &generator) {

  StatementList::const_iterator it;
  for (it = statements.begin(); it != statements.end(); ++it) {
    (**it).GenIR(generator);
  }
  return NULL;
}

llvm::Value *NFunctionDeclaration::GenIR(IRGenerator &generator) {

  std::vector<llvm::Type*> arg_types;
  for (auto arg: this->arguments) {
    arg_types.push_back(generator.GetType(arg->type.name));
    generator.SetLocalValue()
  }

  llvm::FunctionType *ftype = llvm::FunctionType::get(llvm::Type::getVoidTy(generator.GetContext()), arg_types, false);

  llvm::Function *function = llvm::Function::Create(ftype, llvm::GlobalValue::ExternalLinkage, id.name.c_str(), generator.GetModule());

  llvm::BasicBlock *bblock = llvm::BasicBlock::Create(generator.GetContext(), "entry", function, nullptr);

  // handle functbion arguments
//  auto func_arg = arguments.begin();
//  for (auto &arg_it: )

  block.GenIR(generator);

  return function;
}

llvm::Value *NIfStatement::GenIR(IRGenerator &generator) {
  llvm::Value *cond = condition.GenIR(generator);

  llvm::BasicBlock *then = llvm::BasicBlock::Create(generator.GetContext(), "then");
  llvm::BasicBlock *merge = llvm::BasicBlock::Create(generator.GetContext(), "ifcont");
  generator.GetBuilder().CreateCondBr(cond, then, merge);

  return NULL;
}

llvm::Value *NBinaryOperator::GenIR(ncc::IRGenerator &generator) {
  llvm::Value *l = lhs.GenIR(generator);
  llvm::Value *r = rhs.GenIR(generator);

  return NULL;
}

llvm::Value *NIdentifier::GenIR(ncc::IRGenerator &generator) {
  generator.GetBuilder().CreateLoad(name.c_str(), false, "");
  return NULL;
}

llvm::Value *NStructDeclaration::GenIR(ncc::IRGenerator &generator) {
//printf("fk\n");
  auto packetStruct = llvm::StructType::create(generator.GetContext(), id.name);

  generator.AddStruct(id.name, packetStruct);

  std::vector<llvm::Type*> memberTypes;
  memberTypes.push_back(llvm::Type::getInt32Ty(generator.GetContext()));
  packetStruct->setBody(memberTypes);
  return NULL;
}

}