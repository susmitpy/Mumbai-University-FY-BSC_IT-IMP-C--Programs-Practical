#include <stdio.h>

float sum(float *, int);

void main()
{
  float arr[5], *p;
  int n = 5, i;
  printf("Sum of elements in array: \n");
  for (i = 0; i < 5; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%f", &arr[i]);
  }

  p = arr;
  printf("Sum is: %f\n", sum(p, n));
}

float sum(float *arr, int n)
{
  int i;
  float sum;

  for (i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  return sum;
}
