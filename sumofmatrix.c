#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],sum[5][5];//sum=a+b
	int r,c,i,j;
	
	printf("\n Enter row size : ");
	scanf("%d",&r);
	
	printf("\n Enter column size : ");
	scanf("%d",&c);
	
	// Enter a matrix element
	printf("\n Enter First matrix Elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	// Enter b matrix element
	printf("\n Enter Second matrix Elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	//sum of matrix a and b
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
		
	//print  matrix 
	printf("\n sum of Matrix is : \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t %d" ,sum[i][j]);
		}
		printf("\n\n");
	}
	getch();
	
}
