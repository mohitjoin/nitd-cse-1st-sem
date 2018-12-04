#include<stdio.h>
int main()
{
  int num,i=2,a=0;
  printf("\nenter no:" );
  scanf("%d",&num);
  while(i<=num/2)
  {
    a=num%i;
    if(a==0)
    {  break;}
      i++;
  }
  if(a==0)
  printf("not a prime number");
  else
  printf("a prime number\n");
return 0;
}
