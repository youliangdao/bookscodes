#include <stdio.h>

#define DEBUG_MODE 5

int main(int argc, char const *argv[])
{
  int x = 0;


#ifdef DEBUG_MODE
  printf("This is DEBUG MODE!\n");
#endif

#ifndef DEBUG_MODE
  printf("This is RELEASE MODE!\n");
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

  printf("%d", x);
  return 0;
}


