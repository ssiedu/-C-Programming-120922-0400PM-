#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10],str3[20];
	printf("\n Enter First String : ");
	gets(str1);
	printf("\n Enter Second String : ");
	gets(str2);
	printf("\n Enter Third String : ");
	gets(str3);
	strcat(str1,str2);
	printf("\n string concatinate : %s",str1);
	strcat(str1,str3);
	printf("\n string concatinate : %s",str1);
	getch();
	
}
