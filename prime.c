#include <stdio.h>

void main()
{
  int n, count = 3, flag = 0; // prime
  printf("Enter an integer: ");
  scanf("%d", &n);

  printf("Number is ");

  if (n == 1)
  {
    printf("Unit");
  }
  else if (n == 2 || n == 3)
  {
    printf("Prime");
  }
  else
  {
    while (count < n)
    {
      if (n % count == 0)
      {
        flag = 1;
        break;
      }
      count += 2;
    }

    if (flag == 0)
    {
      printf("Prime");
    }
    else
    {
      printf("Composite");
    }

  }
}
