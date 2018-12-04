//Swap the two numbers using pointer
#include<stdio.h>
void swap(int *a,int *b)
{
  *a=*a + *b;
  *b=*a - *b;
  *a=*a - *b;
printf("the values of numbers during swaping  %d  %d\n",*a,*b);
}
int main()
{
  int c,d;
  printf("enter your numbers: ");
  scanf("%d%d",&c,&d);
  swap(&c,&d);
  printf("values of numbers after swaping value %d  %d\n",c,d);
  return 0;
}
