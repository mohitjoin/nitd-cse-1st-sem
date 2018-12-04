#include<stdio.h>
void main()
{
int a;
printf("enter marks in percentage:");
scanf("%d",&a);
if(a>=90)a=1;
else if(a>=75)a=2;
else if(a<75 && a>=30)a=3;
switch(a)
{case 1: printf("A grade");
break;
case 2: printf("B grade");
break;
case 3: printf("C grade");
break;
default: printf("fail");
}
}
