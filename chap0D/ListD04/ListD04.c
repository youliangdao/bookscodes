#include <stdio.h>
#include <time.h>

int main(void)
{
  time_t t = time(NULL);
  printf("time関数で取得した値：%s\n", ctime(&t));

  return 0;
}
