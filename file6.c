#include<stdio.h>
void main()
{
	FILE *fp;
	char text[25];
	fp=fopen("Myfile3.txt","w");
	fputs("Welcome to Ssi Indore",fp);
	fclose(fp);
	fp=fopen("Myfile3.txt","r");
	printf("%s",fgets(text,25,fp));
	fclose(fp);
	getch();
}
