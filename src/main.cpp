//#include <memory>
//#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IR_generator.h"

extern ncc::NBlock* programBlock;
extern int yyparse();
extern FILE *yyin;

int main(int argc, char* argv[]) {
//  printf("%s", argv[1]);
  FILE *fp = fopen(argv[1], "r");
  if (!fp) {
    printf("cannot open %s\n", argv[1]);
    return -1;
  }
  yyin = fp;
  yyparse();

  ncc::IRGenerator irgen;
  irgen.Generate(*programBlock);

  fclose(fp);
  //CodeGenContext context;
  // context.generateCode(*programBlock);

  return 0;
}