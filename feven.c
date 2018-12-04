#include<stdio.h>
void even(int x)
{
  if(x%2==0)
  printf("even\n");
  else
  printf("odd\n");
}
void main()
{
  int num;
  printf("enter the nummber: ");
  scanf("%d",&num);
  even(num);

}
