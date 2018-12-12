#include <stdio.h>
#include <math.h>

void main()
{
  float a, b, c, r1, r2, sqt;
  printf("Roots: \n");
  printf("Enter the values of a, b and c separated by space: ");
  scanf("%f %f %f", &a, &b, &c);

  sqt = sqrt(pow(b,2) - 4*a*c);
  r1  = ((-1 * b) + sqt) / (2 * a);
  r2  = ((-1 * b) - sqt) / (2 * a);

  printf("Roots: %f\n%f\n", r1, r2);
}
