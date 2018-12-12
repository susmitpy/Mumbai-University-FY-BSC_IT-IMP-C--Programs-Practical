#include <stdio.h>

void main()
{
  int sum = 0, i;
  for (i = 1; i <= 100; i++)
  {
    sum += i;
  }

  printf("Sum from 1 to 100: %d", sum);
}
