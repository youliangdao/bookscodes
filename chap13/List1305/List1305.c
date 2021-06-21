#include <stdio.h>

#define DEBUG_MODE 5
int main(void)
{
  int x = 0;

#ifdef DEBUG_MODE
  printf("This is DEBUG_MODE!\n");
#endif
#ifndef DEBUG_MODE
  printf("This is not DEBUG_MODE!\n");
#endif

#if (DEBUG_MODE == 1)
  x = 1;
#elif (DEBUG_MODE == 2)
  x = 2;
#elif (DEBUG_MODE == 3)
  x = 3;
#else
  x = 9;
#endif

  printf("x = %d\n", x);
  return 0;
}


