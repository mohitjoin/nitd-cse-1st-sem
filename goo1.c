#include<stdio.h>
#include<string.h>
void main()
{
  char str[15];
  int x=0;

  printf("Enter your string: ");
  gets(str);

  int n=strlen(str);

  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(str[i]==str[j])
      {
        printf("\nrequired char: %c\nvievk",str[i]);
        x=1;
        break;
      }
    }
    if(x)
    break;
  }
}
