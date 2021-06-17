#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE* fp;
  char text[] = "sukkiriC!";
  int len = strlen(text);
  int ch;

  //書き込み専用でオープン
  fp = fopen("memo.txt", "w");
  if (fp == NULL)
  {
    exit(1);
  }

  //文字列を１文字（1バイト）ずつ書き込む
  for (int i = 0; i < len; i++)
  {
    fputc(text[i], fp);
  }

  fclose(fp);

  //読み取り専用でオープン
  if ((fp = fopen("memo.txt", "r")) == NULL)
  {
    exit(1);
  }

  //標準出力に表示
  while ((ch = fgetc(fp)) != EOF)
  {
    putchar((char)ch);
  }

  fclose(fp);
  return 0;
}
