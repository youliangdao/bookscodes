#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //書き込み専用バイナリモードでファイルを指定し、開く
  FILE* fwp;
  fwp = fopen("bluebox.bmp", "wb");
  if (fwp == NULL)
  {
    exit(1);
  }

  //データの格納
  char staticNum[2] = {66, 67};
  int fileSize = 246;
  char staticShort[4] = {0};
  int size[4] = {54, 40, 8, 8};
  short colors[2] = {1, 24};
  int others[6] = {0};
  char image[64][3];
  for (int i = 0; i < 64; i++)
  {
    for (int j = 0; j < 3; i++)
    {
      char colorNum[3] = {-1, 0, 0};
      image[i][j] = colorNum[j];
    }
  }

  fwrite(staticNum, 1, 2, fwp);
  fseek(fwp, 3, SEEK_SET);
  fwrite(&fileSize, 4, 1, fwp);
  fseek(fwp, 7, SEEK_SET);
  fwrite(staticShort, 1, 4, fwp);
  fseek(fwp, 11, SEEK_SET);
  fwrite(size, 4, 4, fwp);
  fseek(fwp, 27, SEEK_SET);
  fwrite(colors, 2, 2, fwp);
  fseek(fwp, 31, SEEK_SET);
  fwrite(others, 4, 6, fwp);
  fseek(fwp, 55, SEEK_SET);

  fwrite(image, 1, 192, fwp);


  fclose(fwp);
  return 0;
}
