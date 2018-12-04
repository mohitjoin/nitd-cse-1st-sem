#include<stdio.h>
int fact(int x)
{
  if(x==1)
  return 1;
  else
  return x*fact(x-1);
}
void main()
{
  int n,factorial;
  printf("enter the number: ");
  scanf("%d",&n);
  factorial=fact(n);
  printf("factorial=%d",factorial);
}
