#include <stdio.h>

int main() {
  int num, rem1, rem2, rem3, rem4, rem5;

  // Without using %o specifier

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  rem1 = num % 8;
  num /= 8;
  rem2 = num % 8;
  num /= 8;
  rem3 = num % 8;
  num /= 8;
  rem4 = num % 8;
  num /= 8;
  rem5 = num % 8;
  num /= 8;

  int retVal = (rem1) + (rem2 * 10) + (rem3 * 10 * 10) + (rem4 * 10 * 10 * 10) + (rem5 * 10 * 10 * 10 * 10);

  printf("The number in octal is: %.5d", retVal);
}