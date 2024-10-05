#include <stdio.h>

int main(void) {
  int x, f;
  printf("Enter a value for x: ");
  scanf("%d", &x);
  
  f = (3 * x * x * x * x * x) + 
      (2 * x * x * x * x) - 
      (5 * x * x * x) - 
      (x * x) + 
      (7 * x) - 
      6;
  printf("f(x) = %d\n", f);
  return 0;
}