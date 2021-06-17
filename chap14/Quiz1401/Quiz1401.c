#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv[])
{
  //コマンドライン引数が3でなければエラーを表示して、終了する
  if (argc != 3)
  {
    printf("ファイルを二つ指定してください\n");
    exit(1);
  }

  /*第1引数で指定されたファイルをバイナリモードで読み取り用として開く。
  失敗しらたエラーを表示して終了する*/
  FILE* binary1;
  char* filename1 = argv[0];
  char rbuf[20];

  binary1 = fopen(filename1, "rb");
  if (binary1 == NULL)
  {
    printf("コピー元ファイルを開けません\n");
    exit(1);
  }

  /*第2引数で指定されたファイルをバイナリモードで書き込み用として開く。
  失敗したら読み取り用のファイルを閉じ、エラーを表示して終了する*/
  FILE* binary2;
  char* filename2 = argv[1];

  binary2 = fopen(filename2, "wb");
  if (binary2 == NULL)
  {
    fclose(binary1);
    printf("コピー先ファイルを開けません\n");
    exit(1);
  }

  //コピー元ファイルの終わりまで読み書きを繰り返す
  int ch;
  while ((ch = fgetc(binary1)) != EOF)
  {
    fputc(ch, binary2);
  }

  fclose(binary1);
  fclose(binary2);

  return 0;
}

