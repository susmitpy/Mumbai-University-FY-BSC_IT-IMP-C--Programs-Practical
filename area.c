#include <stdio.h>
#include <math.h>

void main()
{
  float l, b, s, r;
  float pi = 3.1415;

  printf("Rectangle:\n");
  printf("Enter the length and breadth separated by space: ");
  scanf("%f %f", &l, &b);

  printf("Area is %f square units", l*b);

  printf("Square:\n");
  printf("Enter the length of a side: ");
  scanf("%f", &s);

  printf("Area is %f square units\n", s * s);

  printf("Circle:\n");
  printf("Enter the radius\n");
  scanf("%f", &r);

  printf("Area is %f square units", pi * pow(r,2));

}
