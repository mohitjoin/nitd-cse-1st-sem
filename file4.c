//copy one file to anthoer file 
#include<stdio.h>
void main()
{

	FILE *f1,*f2;
	f1=fopen("data1.txt","r");
	f2=fopen("blank.txt","w");
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

			fprintf(f2,"%c",ch);
		}
	printf("copy completed");
	}

}
