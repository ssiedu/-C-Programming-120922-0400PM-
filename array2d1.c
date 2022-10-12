#include<stdio.h>
void main()
{
	int arr[2][3];//={{1,2,3},{4,5,6}};
	
	arr[0][0] = 10;
	arr[0][1] = 20;
	arr[0][2] = 30;
	arr[1][0] = 40;
	arr[1][1] = 50;
	arr[1][2] = 60;
	
	printf("\n Matrix is : \n\n");
	
	printf("\t %d",arr[0][0]);//1
	printf("\t %d",arr[0][1]);//2
	printf("\t %d",arr[0][2]);//3
	printf("\n\n");
	printf("\t %d",arr[1][0]);//4
	printf("\t %d",arr[1][1]);//5
	printf("\t %d",arr[1][2]);//5//6
	
	
}
