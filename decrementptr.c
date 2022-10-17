#include<stdio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	printf("\n previous address of ptr : %u",ptr);
	ptr=ptr-1;//ptr--//--ptr;
	// new address = current_address - i *(size of datatype)
	printf("\n new Address of ptr : %u",ptr);
	getch();
}
