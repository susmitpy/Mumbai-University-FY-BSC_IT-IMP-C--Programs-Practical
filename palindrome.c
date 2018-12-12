#include <stdio.h>

void main()
{
  int num, org, rev = 0, rem;
  printf("Enter an integer: ");
  scanf("%d", &num);

  org = num;

  while (num != 0)
  {
    rem = num % 10;
    rev = (rev * 10) + rem;
    num /= 10;
  }

  printf("The number entered is ");

  if (org == rev)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not a palindrome");
  }
}
