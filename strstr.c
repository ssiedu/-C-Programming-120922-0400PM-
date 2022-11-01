#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	char *sub;
	printf("\n Enter Any String : ");
	gets(str);
	sub=strstr(str,"is");
	printf("\n string is in sub string form : %s",sub);
	getch();
}
