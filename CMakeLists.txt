cmake_minimum_required(VERSION 3.12)
project(ncc)

set(CMAKE_CXX_STANDARD 14)

find_package(FLEX REQUIRED)
find_package(BISON REQUIRED)
find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")


flex_target(lexer src/token.l "${CMAKE_CURRENT_BINARY_DIR}/token.cc")

bison_target(parser src/parser.y "${CMAKE_CURRENT_BINARY_DIR}/parser.cc")

include_directories(src)

add_definitions(${LLVM_DEFINITIONS})
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

llvm_map_components_to_libnames(llvm_libs support core irreader)

add_executable(ncc
        src/main.cpp
        ${BISON_parser_OUTPUTS}
        ${FLEX_lexer_OUTPUTS}
        src/IR_generator.cc src/IR_generator.h
        src/node.h src/node.cc)

target_link_libraries(ncc ${llvm_libs})
