#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],temp;
	int r,c,i,j;
	
	printf("\n Enter row size : ");
	scanf("%d",&r);
	printf("\n Enter column size : ");
	scanf("%d",&c);
	
	printf("\n Enter First matrix Element: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Enter Second matrix Element: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			temp=a[i][j];
			a[i][j] = b[i][j];
			b[i][j] = temp;
		}
	}
	
	printf("\n First Matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n Second Matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t %d",b[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
