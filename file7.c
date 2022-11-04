#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("Myfile4.txt","w");
	fputs("this is a Ssi Digital Academy ",fp);
	fseek(fp,22,SEEK_SET);
	fputs(", Bhawarkuan Indore",fp);
	fclose(fp);
	getch();
}
