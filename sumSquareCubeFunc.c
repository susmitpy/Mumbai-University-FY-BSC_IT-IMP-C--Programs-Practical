#include <stdio.h>

int sum(int, int);
int square(int);
int cube(int);

int main()
{
  int a, b;
  printf("Sum Square Cube: \n");
  printf("Enter 2 integers separated by space: ");
  scanf("%d %d", &a, &b);

  printf("a = %d\nb = %d\n",a,b);

  printf("Sum of a and b: %d\n", sum(a,b));
  printf("Square of a: %d\n", square(a));
  printf("Cube of b: %d\n", cube(b));

  return 0;
}

int sum(a,b)
{
  return a+b;
}

int square(a)
{
  return a*a;
}

int cube(b)
{
  return b*b*b;
}
