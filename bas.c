#include<stdio.h>
int main()
{
  int num,i;
  printf("enter number:");
  scanf("%d",&num);
  for(i=1;i<5;i++)
  {
    if(num%10>5)
    {break;}
    num=num/10;
  }
  if(num%10>5)
  printf("enter again a number:");
  scanf("%d",&num);
}
