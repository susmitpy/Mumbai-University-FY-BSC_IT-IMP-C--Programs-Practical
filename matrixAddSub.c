#include <stdio.h>

void main()
{
  float mat1[3][3], mat2[3][3] ,add[3][3], sub[3][3];
  int i, j;

  printf("Enter the corresponding number for Row(R), Column(C): \n");
  printf("Matrix 1: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("R: %d C: %d: ", i+1, j+1);
      scanf("%f", &mat1[i][j]);
    }
  }

  printf("Matrix 2: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("R: %d C: %d: ", i+1, j+1);
      scanf("%f", &mat2[i][j]);
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
       add[i][j] = mat1[i][j] + mat2[i][j];
       sub[i][j] = mat1[i][j] - mat2[i][j];
    }
  }

  printf("Addition: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%f ", add[i][j]);
    }
    printf("\n");
  }

  printf("Subtraction: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%f ", sub[i][j]);
    }
    printf("\n");
  }


}
