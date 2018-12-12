#include <stdio.h>

void main()
{
  int i, j;
  for (i = 1; i < 6; i++)
  {
    for (j = 1; j < i + 1; j++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }
}
