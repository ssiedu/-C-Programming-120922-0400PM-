#include<stdio.h>
void main()
{
	int i,e,s;
	printf("\n Enter start Limit : ");
	scanf("%d",&s);
	printf("\n Enter Stop limit : ");
	scanf("%d",&e);
	printf("\n Natural Numbers : ");
	for(i=s;i<=e;i++)
	{
		printf("\n %d",i);
	}
	getch();
}
