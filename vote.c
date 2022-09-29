#include<stdio.h>
void main()
{
	int age;
	printf("\n Enter the age of person : ");
	scanf("%d",&age);
	if(age>=18)
	printf("\n Person is eligible for vote");
	else
	printf("\n Person is not eligible for vote");
	getch();
}
