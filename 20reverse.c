//Find reverse of a number
#include <stdio.h>

int main()
{
   int n, reverse = 0;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d", &n);

   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n = n/10;
   }
      printf("Reverse=%d", reverse);

   return 0;
}
