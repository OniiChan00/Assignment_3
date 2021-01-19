#include <stdio.h>
#include <math.h>
int main(void) {
  double degree;
  printf("Please enter angle in degree: ");
  scanf("%lf",&degree);
  double radius = degree * (3.14159/180);
  double Sin  = sin(radius);
  double Cos = cos(radius);
  printf("sine of %.1f degree is %.4lf\n",degree,Sin);
  printf("cos of %.1f degree is %.4lf",degree,Cos);
  return 0;
}
