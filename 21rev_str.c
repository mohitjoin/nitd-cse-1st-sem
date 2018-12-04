#include<stdio.h>
void main()
{
  int i=0,x=0;
  char sr[30];

  printf("enter your string: ");

  scanf("%s",sr);

  while(sr[i] != 0)
  {
    i++;
    x++;
  }

  for(i=x;i>=0;i--)
  {
    printf("%c\n",sr[i]);
  }
}
