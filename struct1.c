#include<stdio.h>
struct student
{
  char name[15];
  int roll;
  int marks[5];
  int total;
  struct date_of_birth
  {
    int dd;
    int mm;
    int yy;
  }dob;

}std[3];
void main()
{
  int i,j;

  printf("input data\n");
  for(i=0;i<3;i++)
  {
    printf("name: ");
    scanf("%s",std[i].name);

    printf("roll no.: ");
    scanf("%d",&std[i].roll);

    printf("date of birth(dd mm yy): ");
    scanf("%d%d%d",&std[i].dob.dd,&std[i].dob.mm,&std[i].dob.yy);

    std[i].total=0;
    printf("marks in subjects: ");
    for(j=0;j<3;j++)
    {
      scanf("%d",&std[i].marks[j]);
      std[i].total=std[i].total+std[i].marks[j];
    }
  }
  for(i=0;i<3;i++)
  {
    printf("\n\nstdudent %d\n",i+1);
    printf("Name: %s\n",std[i].name);
    printf("Roll no.: %d\n",std[i].roll);
    printf("date of birth: %d/%d/%d\n",std[i].dob.dd,std[i].dob.mm,std[i].dob.yy);
    printf("total marks: %d\n",std[i].total);

  }
}
