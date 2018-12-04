//floyd's triangle
#include<stdio.h>
void main()
{
  int r,i,j,k=1;
  printf("enter the number of rows: ");
  scanf("%d",&r);

  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    printf(" %d ",k++);

    printf("\n");
  }
}
