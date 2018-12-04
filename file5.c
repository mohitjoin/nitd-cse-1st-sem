//merge two files to another new file
#include<stdio.h>
void main()
{

	FILE *f1,*f2,*f3;

	f1=fopen("data1.txt","r");
	f2=fopen("data2.txt","r");
	f3=fopen("blank.txt","w");
	char ch;

	if(f1==NULL||f2==NULL)
	printf("file does not exist.");

	else
	{
		while(1)
		{
			ch=fgetc(f1);

			if(ch==EOF)
			break;

			fprintf(f3,"%c",ch);
		}

		while(1)
		{
			ch=fgetc(f2);

			if(ch==EOF)
			break;

			fprintf(f3,"%c",ch);
		}

	printf("merging completed");

	}

}
