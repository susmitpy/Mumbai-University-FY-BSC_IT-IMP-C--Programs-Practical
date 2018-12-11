#include <stdio.h>

void main()
{
  int n, i, fac = 1;
  printf("Enter an integer: ");
  scanf("%d", &n);

  for (i=2; i < n; i++)
  {
    fac = fac * i;
  }

  printf("Factorial: %d", fac);

}
