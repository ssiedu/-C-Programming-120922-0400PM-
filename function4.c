// function withiout argument and with reurn value
#include<stdio.h>
int addition();
void main()
{
	//int sum = addition();
	printf("\n sum is : %d",addition());
	getch();
}
int addition()
{
	int num1,num2,res;
	printf("\n Enter the value of num1 : ");
	scanf("%d",&num1);
	printf("\n Enter the value of num2 : ");
	scanf("%d",&num2);
	res=num1+num2;
	return res;
}
