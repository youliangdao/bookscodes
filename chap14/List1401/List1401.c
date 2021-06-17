#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE* fp;

  fp = fopen("memo.txt", "r");
  if (fp == NULL)
  {
    printf("ファイルを開けませんでした\n");
    exit(1);
  }
  else
  {
    printf("ファイルを開きました\n");
  }

  fclose(fp);

  return 0;
}
