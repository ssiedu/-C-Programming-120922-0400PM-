#include<stdio.h>
void main()
{
	int a[5][5];
	int r,c,i,j;
	
	printf("\n Enter row size : ");
	scanf("%d",&r);//3
	
	printf("\n Enter column size : ");
	scanf("%d",&c);//3
	
	printf("\n Enter Array Elements : \n");
	for(i=0;i<r;i++)//1//2//3
	{
		for(j=0;j<c;j++)//0//1//2//3
		{
			scanf("%d",&a[i][j]);//a[2][2]
		}
	}
	
	printf("\n Matrix is : \n\n");
	for(i=0;i<r;i++)//0//1//2//3
	{
		for(j=0;j<c;j++)//0//1//2//3
		{
			printf("\t %d" ,a[i][j]);
		}
		printf("\n\n");
	}
	getch();
	
}
