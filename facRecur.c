#include <stdio.h>

int fac(int);

void main()
{
  int n;
  printf("Factorial using reursion: \n");
  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n < 0 )
  {
    printf("Invalid\n");
  }

  else
  {
    printf("Factorial: %d", fac(n));
  }
}

int fac(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    return n * fac(n-1);
  }
}
