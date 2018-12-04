#include<stdio.h>
void main()
{
  char str1[]="voyager";
  char *ptr;
  ptr= str1;

  puts(str1);

  while(*ptr!='\0')
  {
    printf("%c",*ptr);
    ptr++;
  }
}
