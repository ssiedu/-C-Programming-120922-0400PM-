#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n %d is greater than %d ",a,b);
	}
	else
	{
		printf("\n %d is greater than %d",b,a);
	}
	getch();
}
