#include<stdio.h>
//int a=30;
void main()
{
	 int a=10;
	{
		int a=20;
		printf("\n value of a inside block : %d",a);
	}
	printf("\n value of a : %d",a);
	getch();
}
