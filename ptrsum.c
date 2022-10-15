#include<stdio.h>
void main()
{
	int x,y;
	int *ptr1 = &x;
	int *ptr2 = &y;
	
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	
	printf("\n addition odf two numbers : %d",*ptr1+*ptr2);
	getch();
}
