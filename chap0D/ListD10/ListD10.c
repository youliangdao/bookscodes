#include <stdio.h>

static inline int add(int a, int b)
{
  return a + b;
}

int main(void)
{
  printf("%d\n", add(1, 2));
  return 0;
}
