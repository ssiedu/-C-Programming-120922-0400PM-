//function with argument and without return value
#include<stdio.h>
void addition(int a , int b);//declaration
void main()
{
	int x,y,i; // actual argument
	
		printf("\n Enter the value of x : ");
		scanf("%d",&x);
		printf("\n Enter the value of y : ");
		scanf("%d",&y);
		addition(x,y);// function call

	
	getch();
}

//function definition

void addition(int a , int b)// a and b (formal argument)
{
	printf("\n sum of two numbers : %d",a+b);
}
