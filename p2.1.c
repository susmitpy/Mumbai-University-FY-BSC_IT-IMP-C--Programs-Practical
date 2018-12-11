#include <stdio.h>

void main()
{
  float a, b, c;
  printf("Enter two numbers separated by space: ");
  scanf("%f %f", &a, &b);

  printf("a = %f \n b = %f\n", a, b);

  c = a;
  a = b;
  b = c;

  printf("a = %f \n b = %f", a, b);

}
