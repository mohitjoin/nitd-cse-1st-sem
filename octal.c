//octal to binaray
#include<stdio.h>
void main()
{
  int num,n=0,i=0;
  printf("enter the number in octal system: ");
  scanf("%d",&num);
  int oct[10];

  while(num!=0)
  {
    oct[n]=num%10;
    num=num/10;
    n++;
  }

  printf("the number in binary: ");
  for(i=0;i<n;i++)
  {
    switch(oct[n-i-1])
    {
      case 0: printf("000");
      break;
      case 1: printf("001");
      break;
      case 2: printf("010");
      break;
      case 3: printf("011");
      break;
      case 4: printf("100");
      break;
      case 5: printf("101");
      break;
      case 6: printf("110");
      break;
      case 7: printf("111");
      break;
      default: printf("error");
      break;
    }
  }

}
