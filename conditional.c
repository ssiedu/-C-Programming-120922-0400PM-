#include<stdio.h>
void main()
{
	int num1,num2,res;
	printf("\n Enter first number : ");
	scanf("%d",&num1);
	printf("\n Enter second number : ");
	scanf("%d",&num2);
	res= (num1>num2) ? num1 : num2;
	printf("\n largest number is : %d",res);
	getch();
}
