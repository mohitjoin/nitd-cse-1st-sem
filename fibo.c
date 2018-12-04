#include<stdio.h>
int main()
{
  int i,a=1,b=1,n,c;

  printf("enter the number of terms of fibonacci series: ");
  scanf("%d",&n);

  printf(" 1 1 ");

  for(i=1;i<n-1;i++)
  {
    c=a+b;
    a=b;
    b=c;
    printf(" %d ",c);
  }
return 0;

}
