#include <stdio.h>

#define PI 3.1415

int main(void)
{
  printf("%f", 2 * 2 * PI);
  printf("%s\n", __FILE__);
  printf("%s\n", __TIME__);
  return 0;
}
