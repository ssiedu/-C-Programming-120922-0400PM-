#include<stdio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	int b=20;
	int *ptr1=&b;
	printf("\n previous address of ptr : %u",ptr);
	printf("\n previous address of ptr1 : %u",ptr1);
	ptr=ptr-ptr1;
	// new address = current (address1 - address 2) /(size of datatype)
	printf("\n new Address of ptr : %u",ptr);
	printf("\n new Address of ptr1 : %u",ptr1);
	getch();
}
