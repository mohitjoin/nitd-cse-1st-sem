#include<stdio.h>
void main()
{
  int i,j,x=2;

  for(i=1;i<8;i++)
  {
    for(j=1;j<8-i;j++)
    printf(" ");
    for(j=1;j<2*(i-1)+2;j++)
    {
      if(j<=i)
      printf("%d",j);
      else
      {printf("%d",j-x);
       x=x+2;}
    }
    x=2;


    printf("\n");
  }
}
