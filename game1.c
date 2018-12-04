/*matchstick game*/
#include<stdio.h>
int main()
{
int num=21,uone,utwo;
printf("enter number of matchsticks as 1-4\n\n\n");
while(num>1)
{
  printf("USER1 :enter your number of matchsticks:");
  scanf("%d",&uone);
  printf("\n");
  num=num-uone;
  if(num==1)
  {printf("\n\tWINNER:USER1\n\n\n");
  break;}
  printf("USER2 :enter your number of matchsticks:");
  scanf("%d",&utwo);
  printf("\n");
  num=num-utwo;
  if(num==1)
  {printf("\n\tWINNER:USER2\n\n\n");
  break;}
}
printf("\tGAME OVER\n\n\n");
return 0;
}
