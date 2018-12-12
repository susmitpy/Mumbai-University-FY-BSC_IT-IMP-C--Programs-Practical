#include <stdio.h>

int sum(int);

void main()
{
  int n;
  printf("sum of natural numbers using recursion: \n");
  printf("Enter an integer: ");
  scanf("%d", &n);

  printf("n = %d\n", n);

  printf("Sum from 0 to n: %d", sum(n));

}

int sum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n + sum(n-1);
  }
}
