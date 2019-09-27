#include "scc.h"

int main(int argc, char **argv) {
  if (argc != 2)
    error("%s: invalid number of arguments", argv[0]);

  // argv[1]をinputに保存
  user_input = argv[1];

  // トークナイズする
  token = tokenize(user_input);
  Node *node = expr();

  // アセンブリの前半部分を出力
  printf(".intel_syntax noprefix\n");
  printf(".global main\n");
  printf("main:\n");

  // 構文木を下りながらコードを生成
  gen(node);

  printf("  pop rax\n");
  printf("  ret\n");
  return 0;
}