#include <stdio.h>
#define COEFFICIENT (4.0f/3.0f)
#define PI 3.14159265

int main(void) {
  float radius = 10;

  printf("Volume is: %f \n", COEFFICIENT * PI * radius * radius * radius);
}