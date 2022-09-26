#include<stdio.h>
void main()
{
	int x=3;
	int y;
	/*y=--x;
	printf("\n value of x : %d \n value of y : %d",x,y);*/
	y=x--;//x=x-1
	printf("\n value of x : %d \n value of y : %d",x,y);
	getch();
}
