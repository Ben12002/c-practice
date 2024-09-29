#include <stdio.h>

int main(void) {
  int height = 8;
  int length = 12;
  int width = 10;

  int volume = height * length * width;

  // the result of dividing an int by an int is truncation, which is effectively rounding down.
  int weight = volume / 166;
  printf("dimensional weight: %d\n", weight);

  // therefore, if we want to round up, we can add by 165 before dividing.
  weight = (volume + 165) / 166;
  printf("dimensional weight: %d\n", weight);

  return 0;
}