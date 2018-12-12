#include <stdio.h>

void main()
{
  int num, count = 0;
  printf("Enter an integer: ");
  scanf("&d", &num);

  while (num != 0)
  {
    count += 1;
    num /= 10;
  }

  printf("The number of digits are: %d", count);
}
