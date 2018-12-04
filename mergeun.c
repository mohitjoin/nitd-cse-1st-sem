//merging of two array[unsorted]
#include<stdio.h>
int main()
{

int i,l,n1,n2;

printf("enter the number of elements of array1: ");
scanf("%d",&n1);
int ar1[n1];

printf("enter the elements of arrayı: ");
for(i=0;i<n1;i++)
scanf("%d",&ar1[i]);


printf("enter the number of elements of array2: ");
scanf("%d",&n2);
int ar2[n2];

printf("enter the elements of array2: ");
for(i=0; i<n2; i++)
scanf("%d",&ar2[i]);


for(i=n1,l=0;i<(n1+n2);i++,l++)
ar1[i]=ar2[l];

for (i=0;i<(n1+n2);i++)
printf(" %d ",ar1[i]);

return 0;
}
