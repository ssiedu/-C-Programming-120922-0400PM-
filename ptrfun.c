//function to pointer 
#include<stdio.h>
int add(int *a ,int *b);
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n addition is : %d",add(&x,&y));
	getch();
}
int add(int *a, int *b)
{
	return *a+*b;
}
