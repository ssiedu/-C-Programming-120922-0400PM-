#include<stdio.h>
void fib(int *a,int *b)
{
	int i;
	printf("%d\n%d",*a,*b);
	
	for(i=1;i<5;i++)
	{
		int c=*a+*b;
		printf("\n%d",c);
		*a=*b;
		*b=c;
		
	}
}
void main()
{
	int a,b;
	printf("\n Enter the value of a  : ");
	scanf("%d",&a);
	printf("\n Enter the value of b  : ");
	scanf("%d",&b);
	fib(&a,&b);
	getch();
}
