#include <stdio.h>
#include <stdlib.h>

typedef struct CSV
{
  char name[16];
  int height;
  double sight;
} Csv;

int main(void)
{
  FILE* fp;
  char filename[] = "date.csv";

  //データ準備
  Csv date[3] = {
    {"Kaitou", 180, 1.5},
    {"Misaki", 173, 0.6},
    {"Akagi", 161, 1.0}
  };

  if ((fp = fopen("filename", "w")) == NULL)
  {
    exit(1);
  }


  //準備したデータをcsvファイルに書き込み、書き込んだ文字数をそれぞれ表示する
  for (int i = 0; i < 3; i++)
  {
    int cn = fprintf(fp, "%sです。身長は%dcmで、視力は%fです。\n", date[i].name, date[i].height, date[i].sight);
    if (cn < 0)
    {
      printf("書き込みに失敗しました\n");
      fclose(fp);
      exit(1);
    } else
    {
      printf("%sさん：%d文字書き込みました\n", date[i].name, cn);
    }
  }

  fclose(fp);

  return 0;
}


