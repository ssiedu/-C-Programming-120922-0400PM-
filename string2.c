#include<stdio.h>
void main()
{
	char str[20];
	printf("\n Enter any string : ");
	scanf("%[^\n]s",&str);
	printf("\n String is : %s",str);
	getch();
}
