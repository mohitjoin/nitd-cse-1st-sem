//Compare the two files
#include<stdio.h>
void main()
{

	FILE *f1,*f2;
	int x;
	char c1,c2;
	f1=fopen("data1.txt","r");
	f2=fopen("data2.txt","r");

	if(f1==NULL&&f2==NULL)
	printf("identical");
	else if(f1!=NULL&&f2==NULL||f1==NULL&&f2!=NULL)
	printf("non identical");
	else
	{
	 while(1)
	 {
	 	c1=fgetc(f1);
	 	c2=fgetc(f2);

	 	if(c1==EOF||c2==EOF)
	 	break;


	 	if(c1!=c2)
	 	{x=5;
		break;}
	 }
	 if(x=5)
	 printf("non identical");
	 else
	 printf("identical");

	 }
}
