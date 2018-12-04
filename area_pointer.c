#include<stdio.h>
#include<math.h>
int main()
{
  int ar,a,b,c,s;
  printf("enter the length of sides:\n");
  scanf("%d%d%d",&a,&b,&c);
  s=(a+b+c)/2;
  ar= pow(s*(s-a)*(s-b)*(s-c),0.5);
  printf("area=%d\n",ar);
  return 0;
}
