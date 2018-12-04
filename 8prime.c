#include<stdio.h>
int main()
{
  int i,n,j;
  printf("enter the last number of range: ");
  scanf("%d",&n);
  for(i=2;i<n+1;i++)
  {
    int x=0;
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {x=1;}
    }
    if(x==0)
    printf(" %d ",i);
  }

return 0;
}
