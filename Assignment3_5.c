#include <stdio.h>

int main(void) {
  int money;
  scanf("%d",&money);
  printf("%d ",money /1000);
  money = money % 1000;
  printf("%d ",money /500);
  money = money % 500;
  printf("%d ",money /100);
  money = money % 100;
  printf("%d ",money /50);
  money = money % 50;
  printf("%d ",money /20);
  money = money % 20;
  printf("%d ",money /10);
  money = money % 10;
  printf("%d",money /1);
  return 0;
}
