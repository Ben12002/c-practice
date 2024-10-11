#include <stdio.h>

int main() {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;

  printf("Enter the first digit: ");
  scanf("%1d", &d);

  printf("Enter the second group of 5 digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

  printf("Enter the third group of 5 digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

  int first_sum = d + i2 + i4 + j1 + j3 + j5;
  int second_sum = i1 + i3 + i5 + j2 + j4;

  int check_digit = 9 - ((((3 * first_sum) + second_sum) - 1) % 10);

  printf("Check digit is: %d\n", check_digit);

  return 0;
}