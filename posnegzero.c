#include <stdio.h>

void main()
{
  float num;
  printf("Pos - Neg - Zero: \n");
  printf("Enter a number: ");
  scanf("%f", &num);

  printf("%f is ", num);

  if (num > 0)
  {
    printf("Positive");
  }
  else if (num < 0)
  {
    printf("Negative");
  }
  else
  {
    printf("Zero");
  }
}
