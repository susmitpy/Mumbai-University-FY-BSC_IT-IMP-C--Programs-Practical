#include <stdio.h>

void main()
{
  int i, j;
  for (i = 5; i > 0; i--)
  {
    for (j = 1; j < i + 1; j++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }
}