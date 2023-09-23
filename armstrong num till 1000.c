#include <math.h>
#include <stdio.h>
int main() 
{
   int  n, number, originalNumber, rem, count = 0,result=0;
   scanf("%d", &n);
   for (number = 0; number <=n; ++number)
   {
      originalNumber = number;
      while (originalNumber != 0) 
      {
         originalNumber /= 10;
         ++count;
      }
      originalNumber = number;
      while (originalNumber != 0) 
      {
         rem = originalNumber % 10;
         result += pow(rem, count);
         originalNumber /= 10;
      }
      if (result == number) 
      {
         printf("%d ", number);
      }
      count = 0;
      result = 0;
   }
}
