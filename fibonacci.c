#include<stdio.h>
void main()
{
	int a=0,b=1,c;
	int n,i;
	printf("\n Enter Any Number : ");
	scanf("%d",&n);
	printf("%d\n%d",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
		
	}
	getch();
}
