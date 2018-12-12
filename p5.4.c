#include <stdio.h>

void main()
{
  int i, j;
  for (i = 1; i < 6; i++)
  {
    for (j = 1; j < 7 - i; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}
