#include <stdio.h>

void main()
{
  int i, j, t, n =5;
  float arr[5];

  printf("Sorting array: \n");

  for (i=0; i < n; i++)
  {
    printf("Enter number %d: ", i+1);
    scanf("%f", &arr[i]);
  }

  for (i = 1; i < n; i ++)
  {
    for (j = 0; j < n -1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        t = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = t;
      }
    }
  }

  printf("Ascending Order: ");

  for (i = 0; i < n; i++)
  {
    printf("%f ", arr[i]);
  }

  printf("Descending Order: ");

  for (i = n-1; i >= 0; i--)
  {
    printf("%f ", arr[i]);
  }
}
