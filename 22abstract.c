#include<stdio.h>
void main()
{
  char s[20];
  int n,i;
  printf("enter your string: ");
  scanf("%s",s);

  printf("enter the length of string which is to be abstracted: ");
  scanf("%d",&n);

  char s1[n];

  for(i=0;i<n;i++)
  s1[i]=s[i];

  printf("string after the abstraction: %s",s1);
}
