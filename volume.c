#include <stdio.h>
#include <math.h>

void main()
{
  float a, sr, cr, ch;
  float pi = 3.1415;

  printf("Volume: \n");
  printf("Cube:\n");
  printf("Enter the length of a side: ");
  scanf("%f", &a);
  printf("Volume is %f cubic units", pow(a,3));

  printf("Sphere:\n");
  printf("Enter the radius: ");
  scanf("%f", &sr);
  printf("Volume is %f cubic units", (4.0/3)*(pi)*(pow(sr,3)));

  printf("Cylinder:\n");
  printf("Enter the height and radius separated by space: ");
  scanf("%f %f", &ch, &cr);
  printf("Volume is %f cubic units", pi * pow(cr, 2) * ch);
}
