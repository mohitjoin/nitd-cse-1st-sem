//find smallest number of an array using pointer
#include<stdio.h>
void main()
{
  int a[20]={0};
  int i,n;

  printf("enter the number of elements of array: ");
  scanf("%d",&n);

  printf("enter the elements of array:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i] );

  int min;
  int *pmin;
  pmin=&min;

  *pmin=a[0];

  for(i=0;i<n;i++)
  {
    if(*pmin>a[i])
    *pmin=a[i];
  }

  printf("min=%d\n\n",*pmin);
  printf("address of min=%p\n\n",pmin);

}
