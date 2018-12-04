//add numbers using call by reference
#include<stdio.h>
void sum(int *a,int *b)
{
  printf("sum=%d\n",(*a + *b));
}
void main()
{
  int p,q;
  printf("enter two numbers: ");
  scanf("%d%d",&p,&q);
  sum(&p,&q);
}
