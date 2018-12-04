#include<stdio.h>
int main()
{
int num,sum=0,i=1,a;
printf("enter number");
scanf("%d",&num);
while(i<=num/2)
{
  a=num%i;
  if(a==0)
  {sum=sum+i;}
  i++;
}
printf("%d\n",sum );
return 0;
}
