#include<stdio.h>
void main()
{
  char str[30];

  printf("enter the string: ");
  gets(str);

  char *ptr;
  ptr=str;

  puts(str);

  while(*ptr!='\0')
  {
    printf("%c",*ptr);
    ptr++;
  }

  printf("\n\n");

}
