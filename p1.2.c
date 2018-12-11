#include <stdio.h>

void main()
{
  int a, b;
  float c, d;
  double e, f;

  a = 3;
  c = 3.14;
  e = 2.1718;

  printf("Enter an integer: ");
  scanf("%d", &b);

  printf("Enter a floating point number: ");
  scanf("%f", &c);

  printf("Enter a double: ");
  scanf("%lf", &f);

  printf("Pre-Assigned Values:\n");
  printf("%d, %f, %lf", a, c, e);

  printf("User-Assigned Values:\n");
  printf("%d, %f, %lf", b, d, f);

}
