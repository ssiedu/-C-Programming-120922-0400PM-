//function with argument and with return value
#include<stdio.h>
float addition(float a, float b);//function declaration
void main()
{
	float x,y,sum;
	printf("\n Enter the value of x : ");
	scanf("%f",&x);
	printf("\n Enter the value of y : ");
	scanf("%f",&y);
	sum = addition(x,y);//call
	printf("\n sum is : %.2f",sum);
	getch();
}

float addition(float a , float b)//function definition
{
	return a+b;
}
