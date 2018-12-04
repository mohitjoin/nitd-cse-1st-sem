#include<stdio.h>
void main()
{
  char x;
  printf("enter the letter: ");
  scanf("%c",&x);
  if(x>='A'&&x<='Z')
  printf("the letter in lowercase: %c",x+32);
  else if(x>='a'&&x<='z')
  printf("the letter in uppercase: %c",x-32);
}
