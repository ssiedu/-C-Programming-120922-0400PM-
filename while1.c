#include<stdio.h>
void main()
{
	int i,n;
	printf("\n Enter the limit : ");
	scanf("%d",&n);
	printf("\n natural numbers : ");
	i=1;
	while(i<=n)
	{
		printf("\n %d",i);
		i++;
	}
	getch();
}
