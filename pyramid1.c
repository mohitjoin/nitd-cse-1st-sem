#include<stdio.h>
void main()
{
  int i,j;

  for(i=0;i<4;i++)
  {
    for(j=0;j<4-i;j++)
    printf(" ");
    for(j=1;j<2*i+2;j++)
    printf("%d",j);

    printf("\n");
  }
}
