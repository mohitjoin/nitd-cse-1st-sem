//not completed
#include<stdio.h>
int fact(int p)
{
  if(p==1)
  return 1;
  else
  return p*fact(p-1);
}

int main()
{
  int i;
  float value;

  for(i=1;i<8;i++)
  {
    value=value+(i/fact(i));
    printf(" %d ",fact(i));
  }
  printf("\n\n\nthe value of series upto seventh term: %.2f\n",value);
}
