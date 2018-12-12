#include <stdio.h>
#include <math.h>

void main()
{
   int num, org, tot = 0, rem;
   printf("Enter a 3 digit integer: ");
   scanf("%d", &num);

   org = num;
   while (num != 0)
   {
     rem = num % 10;
     tot += pow(rem, 3);
     num /= 10;
   }

   printf("The number is: ");
   if (org == tot)
   {
     printf("Armstrong");
   }
   else
   {
     printf("Not a Armstrong");
   }

}
