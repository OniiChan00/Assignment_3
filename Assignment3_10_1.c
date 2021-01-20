#include <stdio.h>
#include <string.h>
int main(void)
 {
  char bit[8];
  int len,i;
  scanf("%s",bit);
  bit[7] = '0';
  bit[5] = '0';
  len = strlen (bit);
  for(i = 0; i < len; i++)
  {
    printf("%c",bit[i]);
  }
  return 0;
}
