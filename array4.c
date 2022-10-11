#include<stdio.h>
void main()
{
	int arr[50];
	int i,n;
	
	printf("\n Enter Array size : ");
	scanf("%d",&n);
	
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n Element [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Array Elements : \n");
	
	for(i=0;i<n;i++)
	{
		printf("\nvalue of arr[%d]: %d",i,arr[i]);
	}
	
	getch();
	
	
}
