#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("\n Enter Any String : ");
	gets(str);
	strlwr(str);
	printf("\n String in lower case letter : %s",str);
	getch();
}
