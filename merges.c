//merging of two array[sorted]
#include<stdio.h>
int main()
{


int i,j,l,n1,n2,x=0;;

printf("enter the number of elements of array1: ");
scanf("%d",&n1);

int ar1[n1];

printf("enter the elements of array1:\n");
for(i=0;i<n1;i++)
scanf("%d",&ar1[i]);


printf("enter the number of elements of array2:");
scanf("%d",&n2);
int ar2[n2];

printf("enter the elements of array2:\n");
for(i=0; i<n2; i++)
scanf("%d",&ar2[i]);


for(i=n1,l=0;i<(n1+n2);i++,l++)
ar1[i]=ar2[l];

printf("\n\nunsorted\n\n");

for(i=0;i<(n1+n2);i++)
{
    printf(" %d ",ar1[i]);
}
printf("\n");

//sorting

    while(x!=1)
    {
    x=1;
    for(i=0;i<(n1+n2)-1;i++)
     {
        if(ar1[i]>ar1[i+1])
        {
            ar1[i]=ar1[i]+ar1[i+1];
            ar1[i+1]=ar1[i]-ar1[i+1];
            ar1[i]=ar1[i]-ar1[i+1];
            x=0;
        }
     }
    }
    printf("\n\nsorted\n\n");
    for(i=0;i<(n1+n2);i++)
    {
        printf(" %d ",ar1[i]);
    }

    return 0;
}
