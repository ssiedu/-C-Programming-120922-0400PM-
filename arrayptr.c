#include<stdio.h>
void main()
{
	int arr[5]={11,22,33,44,55};
	int *ptr = arr;
	int i;
	printf("\n Array Elements : \n");
	for(i=0;i<5;i++)
	{
		printf("\n %d",*(ptr+i));
	}
	getch();
}
