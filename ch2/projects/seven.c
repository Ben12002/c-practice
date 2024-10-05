#include <stdio.h>

int main(void) {
  int amount, twenties, tens, fives, ones, remainder;

  printf("Enter an amount: ");
  scanf("%d", &amount);
  remainder = amount;

  twenties = remainder / 20;
  printf("$20 bills: %d\n", twenties);
  remainder = remainder - (twenties * 20);

  tens = remainder / 10;
  printf("$10 bills: %d\n", tens);
  remainder = remainder - (tens * 10);

  fives = remainder / 5;
  printf("$5 bills: %d\n", fives);
  remainder = remainder - (fives * 5);

  ones = remainder / 1;
  printf("$1 bills: %d\n", ones);
  remainder = remainder - (ones * 1);

  return 0;
}