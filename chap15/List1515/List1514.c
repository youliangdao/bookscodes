#include <stdio.h>
#define main __old_main__
#include "List1513.c"
#undef main

int main(void)
{
  if (add(1, 2) != 3) {
    printf("テスト失敗！add(1, 2)=3ではありません");
    return 1;
  } else {
    printf("テスト成功！");
  }
  return 0;
}
