#include<stdio.h>
void main()
{
  char str[30];
  printf("enter your string: ");
  scanf("%[^\n]s",str);
  printf("%s\n\n",str);
}
