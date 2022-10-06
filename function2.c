#include<stdio.h>
void addition(); // function declaration
void main()
{
	int i;
	for(i=0;i<2;i++)
	{
		addition();//function call	
	}
	
	//addition();
	getch();
}

//function definition
void addition()
{
	int num1,num2;
	printf("\n Enter the value of num1 : ");
	scanf("%d",&num1);
	printf("\n Enter the value of num2 : ");
	scanf("%d",&num2);
	printf("\n addition of two number is : %d",num1+num2);
}
