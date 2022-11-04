#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("Myfile1.txt","w");
	fprintf(fp,"Welcome to ssi Digital");
	fclose(fp);
	getch();
	
}
