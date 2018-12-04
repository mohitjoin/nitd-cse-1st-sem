#include<stdio.h>
int main()
{
  int i,n,j,sum=0;
  printf("enter the last number of range: ");
  scanf("%d",&n);
  for(i=6;i<n+1;i++)
  {
    sum=0;
    for(j=1;j<=i/2;j++)
    {
      if(i%j==0)
      {
        sum=sum+j;
      }
    }
    if(i==sum)
    printf(" %d ",i);
  }

return 0;
}
