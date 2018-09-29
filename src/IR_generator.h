//
// Created by gd on 2018/9/5.
//

#ifndef NCC_IR_GENERATOR_H
#define NCC_IR_GENERATOR_H

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include "node.h"

namespace ncc {

class IRGenerator {
  llvm::LLVMContext context;
  llvm::Module *module;
  llvm::IRBuilder<> builder;
  std::map<std::string, llvm::StructType*> _structList;
  std::map<std::string, llvm::Value*> _locals;

 public:
  IRGenerator() : builder(context) {
    module = new llvm::Module("main", context);
  }

  llvm::LLVMContext &GetContext() { return context; }
  llvm::Module *GetModule() { return module; }
  llvm::IRBuilder<> &GetBuilder() { return builder; }

  void Generate(NBlock &root);

  void AddStruct(std::string name, llvm::StructType *type) { _structList[name] = type; }
  llvm::Type *GetType(std::string name) { return _structList[name]; }

  llvm::Value *GetLocalValue(std::string name) { return _locals[name]; }

};

}

#endif //NCC_IRGENERATOR_H
