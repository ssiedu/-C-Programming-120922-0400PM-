#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Enter the value of c : ");
	scanf("%d",&c);
	if(a>b && a>c)
	printf("\n %d is greater than %d and %d",a,b,c);
	else if(b>c)
	printf("\n %d is greater than %d and %d ",b,a,c);
	else
	printf("\n %d is greater than %d and %d",c,a,b);
	getch();
}
