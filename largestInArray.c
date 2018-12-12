#include <stdio.h>

void main()
{
  float arr[5], max;
  int i;
  printf("Largest no. in array: \n");
  for (i = 0; i < 5; i++)
  {
    printf("Enter the no. %d: ", i+1);
    scanf("%f", &arr[i]);
  }

  max = arr[0];
  for (i = 1; i < 5; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  printf("Largest number: %f", max);
}
