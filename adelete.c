//To delete a number of array of given rank input by user
#include<stdio.h>
int main()
{
  int i,n,j;
  int  a[]={1,2,3,4,5};
  printf("enter the rank of number which is to be deleted: ");
  scanf("%d",&n);
  for(i=n;i<5;i++)
  {a[i-1]=a[i];}

  a[4]= '\0';
  for(j=0;j<4;j++)
  {
    printf("  %d  ",a[j]);
  }
  return 0;
}
