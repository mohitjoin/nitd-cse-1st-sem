//Find GCD of two numbers
#include<stdio.h>
int main()
{
  int a,b,j;
  printf("enter your two numbers:\n");
  scanf("%d%d",&a,&b);

  if(a>b)
  {
    a=a+b;
    b=a-b;
    a=a-b;
  }

  while(a!=1)
  {
    if(b%a==0)
    {printf("gcd=%d",a);
    break;}
    else
    {j=a;
    a=b%a;
    b=j;
    if(a==1)
    printf("gcd=1");}
  }

  return 0;

}
