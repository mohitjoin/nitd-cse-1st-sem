#include<stdio.h>
void gcd(int a,int b)
{
  if(b%a==0)
  printf("gcd=%d\n",a);
  else
  gcd(b%a,a);

}
int main()
{
  int p,q;
  printf("enter your 2 numbers:\n");
  scanf("%d%d",&p,&q);
  if(p>q)
  {
    p=p+q;
    q=p-q;
    p=p-q;
  }
  gcd(p,q);
  return 0;
}
