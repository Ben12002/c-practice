#include <stdio.h>
#define COEFFICIENT (4.0f/3.0f)
#define PI 3.14159265

int main(void) {
  float radius;

  printf("Enter radius: ");
  scanf("%f", &radius);

  printf("Volume is: %.2f \n", COEFFICIENT * PI * radius * radius * radius);
}