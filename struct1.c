#include<stdio.h>
void main()
{
  int i;
  struct student
  {
    char name[15];
    int roll_no;
    int rank;
  };
  struct student student[3];
  printf("input data:\n");
  printf("name    roll_no   rank\n");
  for(i=0;i<3;i++)
  {
    scanf("%s %ls %ls",student[i].name,&student[i].roll_no,&student[i].rank);

  }
  printf("\n\n\nname    roll_no   rank\n");
  for(i=0;i<3;i++)
  {
    printf("%s    %ls    %ls\n",student[i].name,&student[i].roll_no,&student[i].rank);

  }
}
