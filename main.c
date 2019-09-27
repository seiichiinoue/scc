#include "scc.h"

int main(int argc, char **argv) {
  if (argc != 2)
    error("%s: invalid number of arguments", argv[0]);

  user_input = argv[1];

  // Tokenize
  token = tokenize(user_input);
  Node *node = expr();

  printf(".intel_syntax noprefix\n");
  printf(".global main\n");
  printf("main:\n");

  // generate assembly code
  gen(node);

  printf("  pop rax\n");
  printf("  ret\n");
  return 0;
}