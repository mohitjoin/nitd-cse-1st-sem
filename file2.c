//count the number of character and lines
#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("data2.txt","r");

	if(fp==NULL)
	printf("file does not exit");
	else
	{
		int i=0,j=0;
		char ch;

		while(1)
		{
		ch=fgetc(fp);
		if(ch==EOF)
		break;

		if(ch=='\n')
		j++;
		else
		i++;

		}

	printf("number of char=%d\nnumber of lines=%d",i,j);
	}
	fclose(fp);
}
