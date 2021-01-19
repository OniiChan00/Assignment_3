#include <stdio.h>
#include <string.h>
int main(void) {
  int a[3],i,j,k,l,ans[3];
  char n[3];
  for(i = 0; i < 3; i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("%s",n);
  for(i = 0; i < 3; i++)
  {
    for(j = i + 1; j< 3; j++)
    {
      if(a[i] > a[j])
      {
        k = a[i];
        a[i] = a[j];
        a[j] = k;
      }
    }
  }
  for(i = 0; i < 3; i++)
  {
    if(n[i] == 'A')
    {
      ans[i] = a[0];
    }
    else if(n[i] == 'B')
    {
      ans[i] = a[1];
    }
    else if(n[i] == 'C')
    {
      ans[i] = a[2];
    }
  }
  for(i = 0; i < 2;i++)
  {
    printf("%d ",ans[i]);
  }
  printf("%d",ans[2]);
  return 0;
}
