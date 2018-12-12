#include <stdio.h>

void cbr(int *);

void main()
{
  int n, *p;
  printf("Call by reference: \n");
  printf("Enter an integer: ");
  scanf("%d", &n);
  printf("Before calling: n = %d\n", n);

  p = &n;
  cbr(p);
  printf("After calling: n = %d\n", n);
}

void cbr(int *p)
{
  *p = *p + 1;
  printf("After adding 1: n = %d", *p);
}
