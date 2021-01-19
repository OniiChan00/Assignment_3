#include <stdio.h>

int main(void) {
  float price,amount,total;
  printf("Please enter unit price: ");
  scanf("%f",&price);
  printf("Please enter number: ");
  scanf("%f",&amount);
  printf("total = %.2f baht", ((price * amount)*0.07) + (price * amount));
  return 0;
}
