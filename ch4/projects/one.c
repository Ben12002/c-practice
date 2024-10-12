#include <stdio.h>

int main() {
  int input, digit1, digit2;

  printf("Enter a two digit number: ");
  scanf("%2d", &input);

  digit1 = input / 10;
  digit2 = input % 10;

  printf("The reversal is: %d%d\n", digit2, digit1);
  return 0;
}