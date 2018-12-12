#include <stdio.h>

void main()
{
  int n;
  printf("Even odd: \n");
  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    printf("Even");
  }
  else
  {
    printf("Odd");
  }
}
