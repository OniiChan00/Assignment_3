#include <stdio.h>
long long convert(int num);


int main(void) {
  int a;
  scanf("%d",&a);
  printf("%lld",convert(a));
  return 0;
}

long long convert(int num)
{
  int r,i = 1;
  long long bin = 0;
  while(num != 0)
  {
    r = num % 2;
    num /= 2;
    bin += r * i;
    i *= 10;
  }
  return bin;
}

