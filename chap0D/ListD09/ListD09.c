#include <stdio.h>

extern int result;

void add(int a, int b);

int main(void)
{
  add(3, 5);
  printf("addの結果：%d\n", result);
  return 0;
}
