#include<stdio.h>
void swap(int a , int b);//function declaration
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	
	/*printf("\n Before function call : \n");
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);*/
	
	swap(x,y);//function call
	
	printf("\n After function call : \n");
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);
	getch();
}
//function definition
void swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("\n In User define function : \n");
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
}
