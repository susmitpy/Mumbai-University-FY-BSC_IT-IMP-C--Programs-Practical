#include <stdio.h>

void main()
{
  float a, b, c;
  printf("Enter three numbers separated by space: ");
  scanf("%f %f %f", &a, &b, &c);

  printf("a = %f\nb = %f\nc = %f\n", a, b, c);

  printf("Largest: ");
  if (a > b)
  {
    if (b > c)
    {
      printf("a");
    }
    else
    {
      if (a > c)
      {
        printf("a");
      }
      else
      {
        printf("c");
      }
    }
  }
  else
  {
    if (b > c)
    {
      printf("b");
    }
    else
    {
      printf("c");
    }
  }
}

/*
6
3
5

*/
