#include <stdio.h>

void main()
{
  int r, c, s;
  for (r = 1; r < 6; r++)
  {
    for (s = 0; s < 5 - r; s++)
    {
      printf(" ");
    }

    for (c = 0; c < 2 * r - 1; c ++)
    {
      printf("*");
    }

    printf("\n");
  }
}
