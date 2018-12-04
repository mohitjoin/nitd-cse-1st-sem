#include<stdio.h>
void main()
{
  int i,ar[20],n;

  printf("the number of elements of array: ");
  scanf("%d",&n);

  printf("enter the elementsof array: ");
  for(i=0;i<n;i++)
  scanf("%d",ar+i);


  for(i=0;i<n;i++)
  printf(" %d ",*(ar+i));

}
