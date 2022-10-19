#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void main()
{
	int a=10,b=5,res;
	int (*fp[4])(int , int);
	
	fp[0] = &add;
	fp[1] = &sub;
	fp[2] = &mul;
	fp[3] = &div;
	
	res = (*fp[0])(a,b);
	printf("\n addition is : %d",res);
	
	res = (*fp[1])(a,b);
	printf("\n subtraction is : %d",res);
	
	res = (*fp[2])(a,b);
	printf("\n Multiplication is : %d",res);
	
	res = (*fp[3])(a,b);
	printf("\n division is : %d",res);
	
	getch();
	
}

int add(int a, int b)
{
	return a+b;
}

int sub( int a , int b)
{
	return a-b;
}

int mul(int a , int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}





