#include <stdio.h>

void main()
{
  int a, b, c, n, i;
  a = 0;
  b = 1;

  printf("Enter the length of the fibonnaci series: ");
  scanf("%d", &n);

  printf("Fibonnaci Series: ");
  printf("%d %d ", a, b);

  for (i = 1; i < n - 1; i++)
  {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }


}
