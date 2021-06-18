#include <stdio.h>

double sub(int m, int n){
  return (double)m /n;
}

int main(void)
{
  double (*sub_addr) (int, int) = sub;
  printf("関数subの結果：%f\n", sub_addr(4, 2));
  return 0;
}
