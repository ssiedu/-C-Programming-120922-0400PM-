#include<stdio.h>
void main()
{
	char str[25];
	printf("\n Enter Any String : ");
	fgets(str,10,stdin);
	printf("\n String is : %s",str);
	getch();
}
