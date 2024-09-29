#include <stdio.h>

int main(void) {
  int height, length, width;

  printf("Enter height: ");
  scanf("%d", &height);
  printf("height is: %d\n", height);

  printf("Enter length: ");
  scanf("%d", &length);
  printf("length is: %d\n", length);

  printf("Enter width: ");
  scanf("%d", &width);
  printf("width is: %d\n", width);

  int volume = height * length * width;
  int dweight = (volume + 165) / 166;
  printf("Dimensional weight is: %d\n", dweight);

  return 0;
}