#include <stdio.h>

void main()
{
  int i, j;
  for (i = 1; i < 6; i++)
  {
    for (j = 6; j > i; j--)
    {
      printf("*");
    }
    printf("\n");
  }
}
