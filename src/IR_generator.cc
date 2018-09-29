//
// Created by gd on 2018/9/5.
//

#include <llvm/IR/Function.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/Pass.h>
#include <llvm/IR/IRPrintingPasses.h>
#include <llvm/Support/raw_ostream.h>
#include "IR_generator.h"
#include "node.h"

namespace ncc {

void IRGenerator::Generate(NBlock &root) {
  llvm::FunctionType *ftype = llvm::FunctionType::get(llvm::Type::getVoidTy(context), false);



  llvm::Function *mainFunc = llvm::Function::Create(ftype, llvm::GlobalValue::ExternalLinkage, "__ncc_main", module);

  root.GenIR(*this);

  llvm::legacy::PassManager pm;
  pm.add(llvm::createPrintModulePass(llvm::outs()));
  pm.run(*module);
//  module->dump();
}


}