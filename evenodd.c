#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number : ");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("\n number is even");
	}
	else
	{
		printf("\nNumber is Odd");
	}
	getch();
}
