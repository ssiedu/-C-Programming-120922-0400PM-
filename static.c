#include<stdio.h>
void test();
void main()
{
	test();
	test();
	test();
	getch();
}
void test()
{
	static int a;
	printf("\n value of a : %d",a);
	a++;
}
