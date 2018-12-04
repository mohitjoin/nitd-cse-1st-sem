//Find ramanujan numbers in a range
#include<stdio.h>
#include<math.h>
int main()
{
  int num,i,j,n;
  printf("enter the last number of range: ");
  scanf("%d",&n);
  for(num=1729;num<=n;num++)
  {
    int x=0;
    for(i=1;i<pow(num,1.0/3);i++)
    {
      for(j=i+1;j<pow(num,1.0/3);j++)
      {
        if(num==i*i*i+j*j*j)
        {x=x+5;}
      }
    }
  if(x==10)
  printf(" %d ",num);

}
return 0;
}
