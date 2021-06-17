#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE* fp;
  char wbuf[64];

  //書き込み専用でオープン
  if ((fp = fopen("memo.txt", "w")) == NULL)
  {
    exit(1);
  }
  fputs("government of the people, by the peopel, for the people", fp);

  fclose(fp);

  //読み込み専用でオープン
  if ((fp = fopen("memo.txt", "r")) == NULL)
  {
    exit(1);
  }
  if ((fgets(wbuf, 64, fp)) != NULL)
  {
    printf("%s", wbuf);
  }

  fclose(fp);

  return 0;
}
