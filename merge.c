#include<stdio.h>
void main()
{
    printf("Enter size of array 1\n");
    int n1,n2;
    scanf("%d",&n1);
    int a1[n1];
    for(int i =0;i<n1;i++)
     scanf("%d",&a1[i]);
    printf("Enter size of array2\n");
    scanf("%d",&n2);
    int a2[n2];
    int a[n1+n2];
    for(int i =0;i<n2;i++)
    scanf("%d",&a2[i]);
    for(int j =0;j<n1+n2;j++)
    {
        if(j<n1)
	 a[j]=a1[j];
	else
	 a[j]=a2[j-n1];
    }
//printing...
    for(int k =0;k<n1+n2;k++)
 	printf(" %d ",a[k]);
}
