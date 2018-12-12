#include <stdio.h>

void main()
{
  int num, rem, rev = 0;
  printf("Enter an integer: ");
  scanf("%d", &num);

  while (num != 0)
  {
    rem = num % 10;
    rev = (rev * 10) + rem;
    num /= 10;
  }

  printf("Reverse: %d", rev);
}
