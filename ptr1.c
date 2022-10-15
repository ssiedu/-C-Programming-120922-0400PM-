#include<stdio.h>
void main()
{
	int num=10;
	int *ptr;
	ptr=&num;
	float num2=12.33;
	float *fptr=&num2;
	
	printf("\n value of num : %d",num);
	printf("\n address of num : %x",&num);
	printf("\n store address in ptr : %x",ptr);
	printf("\n value of number by ptr : %d",*ptr);
	printf("\n value of num2 : %.2f",num2);
	printf("\n value at position fptr : %.2f",*fptr);
	getch();
}
