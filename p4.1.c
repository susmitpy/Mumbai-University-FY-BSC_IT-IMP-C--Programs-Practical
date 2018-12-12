#include <stdio.h>
#include <math.h>

void main()
{
  int num, sum = 0, rem;
  printf("Enter an integer: ");
  scanf("%d", &num);

  while (num != 0)
  {
    rem = num % 10;
    sum += pow(rem, 2);
    num /= 10;
  }

  printf("Sum of Squares of Digits: %d\n", sum);
}
