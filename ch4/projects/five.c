#include <stdio.h>

int main() {
  int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, check_digit;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10);
  int sum1 = d + i2 + i4 + i6 + i8 + i10;
  int sum2 = i1 + i3 + i5 + i7 + i9;
  check_digit = 9 - ((((3 * sum1) + sum2) - 1) % 10);
  printf("Check Digit: %d", check_digit);
}