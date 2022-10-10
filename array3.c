#include<stdio.h>
void main()
{
	int arr[5] = {11,22,33,44,55};// array initialization
	int i;
	
	printf("\n Array Elements : \n");
	
	for(i=0;i<5;i++)
	{
		printf("\nvalue of arr[%d]: %d",i,arr[i]);
	}
	
	getch();
	
	
}
