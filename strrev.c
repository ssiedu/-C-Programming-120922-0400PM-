#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("\n Enter Any String : ");
	gets(str);
	strrev(str);
	printf("\n string is in reverse form : %s",str);
	getch();
}
