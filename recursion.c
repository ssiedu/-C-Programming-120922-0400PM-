#include<stdio.h>
int number(int n);
void main()
{
	int num;
	printf("\n Enter any number :");
	scanf("%d",&num);
	printf("\n sum of natural number : %d",number(num));
	getch();
}
int number(int n)//5
{
	if(n==0)//F
	return 0;
	else
	return n+number(n-1);
	//5+number(4)//5+4+number(3)//5+4+3+number(2)//5+4+3+2+1+0
}
