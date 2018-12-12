#include <stdio.h>

void cbv(int);

void main()
{
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  printf("Before calling: n = %d\n", n);

  cbv(n);
  printf("After calling: n = %d\n", n);
}

void cbv(int n)
{
  n = n + 1;
  printf("After adding 1: n = %d", n);
}
