#include<stdio.h>
void main()
{
	int num1,num2,temp;
	printf("\n Enter first number :");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	temp = num1;
	num1= num2;
	num2 = temp;
	printf("\n num1 is : %d",num1);
	printf("\n num2 is : %d",num2);
	getch();
}
