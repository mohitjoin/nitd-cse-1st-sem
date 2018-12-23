#include<stdio.h>
int main()
{
  int i,n,x;

  printf("enter the number of days in month: ");
  scanf("%d",&n);

  printf("enter the name of first day of month according to index");
  printf("\nMON: 0; TUE: 1; WED: 2; THRUS: 3;\nFRI: 4; SAT: 5; SUN: 6;\n");
  printf("index: ");
  scanf("%d",&x);

  printf("\n\n\n___________________________\n");
  printf("         CALENDER          \n");
  printf("MON TUE WED THR FRI SAT SUN\n");
  for(i=0;i<x;i++)
  printf("    ");

  for(i=1;i<10;i++)
  {
    printf("%d   ",i);
    if(i==7-x||i==14-x||i==21-x||i==28-x||i==35-x)
    printf("\n");
  }


  for(i=10;i<n+1;i++)
  {
    printf("%d  ",i);
    if(i==7-x||i==14-x||i==21-x||i==28-x||i==35-x)
    printf("\n");
  }
  printf("\n___________________________\n\n");

  return 0;
}
