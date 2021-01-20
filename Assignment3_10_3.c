#include <stdio.h>
#include <string.h>
int main(void)
 {
  char bit[8];
  int len,i;
  scanf("%s",bit);
  if(bit[6] == '0')
  {
    bit[6] = '1';
  }
  else
  {
    bit[6] = '0';
  }
  len = strlen (bit);
  for(i = 0; i < len; i++)
  {
    printf("%c",bit[i]);
  }
  return 0;
}
