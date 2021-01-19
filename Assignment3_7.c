#include <stdio.h>

int main(void) {
  int i,a,b,j;
  scanf("%d %d",&a,&b);
  for(i = 1; i <= a; i++)
  {
    if(a % i == 0 && b % i == 0)
    {
      j = i;
    }
  }
printf("%d",j);
}
