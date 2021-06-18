#include <stdio.h>

typedef struct MONSTER
{
  int hp;
  char status;
} Monster;

enum {
  STATUS_POISON = 1,
  STATUS_SLEEP = 2,
  STATUS_SMALL = 4,
  STATUS_SILENT = 8
};

int main(void)
{
  Monster m;
  m.hp = 100;
  m.status = 0;

  printf("モンスターは毒状態になった！\n");
  m.status |= STATUS_POISON;

  printf("モンスターは「眠り覚まし」を使った！\n");
  m.status &= ~STATUS_SLEEP;

  printf("毒が効いてきた！\n");
  printf("（毒状態ならダメージを2だけ受ける）\n");
  if (m.status & STATUS_POISON) m.hp -= 2;

  printf("「奇跡の石」を使った！\n");
  printf("（毒状態または眠りなら、HPを100回復する）\n");
  if (m.status & (STATUS_POISON | STATUS_SLEEP)) m.hp = 100;

  return 0;
}
