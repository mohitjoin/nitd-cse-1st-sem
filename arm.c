/*find armstrong numbers in a range*/
#include<stdio.h>
void main()
{
  int i,n,x,sum,temp;
  printf("enter the last number of range: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    sum=0;
    temp=i;
    while(temp!=0)
    {
      x=temp%10;
      sum=sum+(x*x*x);
      temp=temp/10;
    }
    if(i==sum)
    printf(" %d ",i);
  }


}
