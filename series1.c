//not completed
#include<stdio.h>
#include<math.h>
void main()
{
  int i,x;
  float value;

  printf("enter the value of x: ");
  scanf("%d",&x);

  value=(x-1)/x;
  for(i=2;i<8;i++)
  {
    value=value+0.5*pow((x-1)/x,i);
  }

  printf("the approximated value of log upto seventh term will be: %f\n",value);
}
