#include<stdio.h>
void main()
{
	int num=40;
	int *ptr = &num;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	int ****pppptr = &ppptr;
	
	printf("\n value of num : %d",num);
	printf("\n value of ptr : %d",*ptr);
	printf("\n value of pptr : %d",**pptr);
	printf("\n value of ppptr : %d",***ppptr);
	printf("\n value of pppptr : %d",****pppptr);
	
	printf("\n Address : \n\n");
	printf("\n value of num : %x",&num);
	printf("\n value of ptr : %x",ptr);
	printf("\n value of pptr : %x",pptr);
	printf("\n value of ppptr : %x",ppptr);
	printf("\n value of pppptr : %x",pppptr);
	printf("\n value of pppptr : %x",&pppptr);
	getch();
}
