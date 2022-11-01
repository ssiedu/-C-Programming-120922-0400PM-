#include<stdio.h>
void main()
{
	char str[20];
	//int count=0;
	int i=0;
	printf("\n Enter Any String :  ");
	gets(str);
	while(str[i]!='\0')
	{	
		i++;
	}
	printf("\n string length is : %d",i);
	getch();
	
}
