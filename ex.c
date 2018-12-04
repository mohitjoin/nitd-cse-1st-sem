//Find gcd and lcm
#include<stdio.h>
int main()
{
  int a,b,j,gcd;
  printf("enter your two numbers:\n");
  scanf("%d%d",&a,&b);
  int p=a;
  int q=b;
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
    gcd=a;
    break;}
    else
    {j=a;
    a=b%a;
    b=j;
    if(a==1)
    {gcd=1;
    printf("gcd=%d",gcd);}
  }
  }
  int lcm=(p*q)/gcd;
  printf("\nlcm=%d",lcm);
  return 0;

}
