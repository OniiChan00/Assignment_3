#include <stdio.h>
int main(void) {
  int a,r,i = 1;
  long long bin = 0;
  scanf("%d",&a);
  while(a != 0)
  {
    r = a % 2;
    a /= 2;
    bin += r * i;
    i *= 10;
  } 
  printf("%lld",bin);
  return 0;
}

