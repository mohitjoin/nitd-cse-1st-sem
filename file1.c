//read and display character by character
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("data1.txt","r");

	if(fp==NULL)
	printf("file does not exist");
	else
	{
	char ch;

	while(1)
	{
	ch=fgetc(fp);
	if(ch==EOF)
	break;


	printf("%c",ch);
	}
	}
	fclose(fp);
	return 0;
	}
