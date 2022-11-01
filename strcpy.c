#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	printf("\n Enter Any String : ");
	gets(str1);
	strcpy(str2,str1);
	printf("\n string in str1 : %s",str1);
	printf("\n String in str2 : %s",str2);
	getch();
}
