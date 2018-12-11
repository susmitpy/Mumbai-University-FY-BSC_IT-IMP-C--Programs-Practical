#include <stdio.h>

void main()
{
  float a, b;
  printf("Enter two numbers separated by space: ");
  scanf("%f %f", &a, &b);

  printf("a = %f \n b = %f\n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("a = %f \n b = %f", a, b);

}
