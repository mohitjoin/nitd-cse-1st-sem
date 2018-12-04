//not completed not completed
#include<stdio.h>
void main()
{
  int num,x=0;
  printf("enter the number: ");
  scanf("%d",&num);
  int octal=0;
  while(num!=0)
  {
    x=num%8;
    octal=x+octal*10;
    num=num/8;

  }

  printf("%d",octal);


}
