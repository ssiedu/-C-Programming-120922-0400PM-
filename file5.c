#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("Myfile2.txt","w");
	fputc('Z',fp);
	fclose(fp);
	fp=fopen("Myfile2.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	getch();
}
