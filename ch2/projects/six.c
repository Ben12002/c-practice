#include <stdio.h>

int main(void) {
  int x, f;
  printf("Enter a value for x: ");
  scanf("%d", &x);
  f = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("f(x) = %d\n", f);
  return 0;
}