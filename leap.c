//Find the entered year is Leap year or not
#include<stdio.h>
void main()
{
int a;
printf("enter year:");
scanf("%d",&a);
if((a%4==0 && a%100!=0) || (a%400==0))
printf("leap year");
else
printf("not leap year");
}
