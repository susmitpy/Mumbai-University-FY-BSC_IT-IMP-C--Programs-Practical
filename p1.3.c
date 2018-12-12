#include <stdio.h>

void main()
{
  double a, b;
  printf("AddSubMulDiv: \n");
  printf("Enter two numbers separated by space: ");
  scanf("%lf %lf", &a, &b);

  printf("a = %lf, b = %lf\n", a, b);

  printf("a + b = %lf\n", a+b);
  printf("a - b = %lf\n", a-b);
  printf("a * b = %lf\n", a*b);
  printf("a / b = %lf\n", a/b);
}
