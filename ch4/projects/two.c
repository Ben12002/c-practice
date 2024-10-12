#include <stdio.h>

int main() {
  int input, digit1, digit23, digit2, digit3;

  printf("Enter a three digit number: ");
  scanf("%3d", &input);

  digit1 = input / 100;
  digit23 = input % 100;
  digit2 = digit23 / 10;
  digit3 = digit23 % 10;

  printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);
}