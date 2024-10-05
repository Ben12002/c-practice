#include <stdio.h>
#define TAX_AMOUNT 0.05f

int main(void) {
  double input;

  printf("Enter an amount: ");
  scanf("%lf", &input);

  printf("With tax added: %.2f\n", (1 + TAX_AMOUNT) * input);

  return 0;
}