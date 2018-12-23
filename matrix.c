#include<stdio.h>
void main()
{
  int i,j,k,m,n,x,p,q;
  int a[10][10],b[10][10],c[10][10];

  printf("enter the rows and columns of first matrix: ");
  scanf("%d%d",&m,&n);

  printf("enter the first matrix:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }

  printf("enter the rows and columns of second matrix: ");
  scanf("%d%d",&p,&q);

  if(n!=p)
  printf("matrices can not be multiplied\n");
  else
  {
    printf("enter the second matrix:\n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      scanf("%d",&b[i][j]);
    }
//multiplication

  for(i=0;i<m;i++)
  {
    for(j=0;j<q;j++)
    {
      x=0;
      for(k=0;k<n;k++)
      {
        x=x+a[i][k]*b[k][j];
      }
    c[i][j]=x;
    }
  }
  printf("product of matrices\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<q;j++)
    {printf("%d\t",c[i][j]);}
    printf("\n");
  }

}



}
