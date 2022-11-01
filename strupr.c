#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	printf("\n Enter Any String : ");
	gets(str1);
	strupr(str1);
	printf("\n string in upeercase : %s",str1);
	getch();
}
