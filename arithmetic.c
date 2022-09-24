#include<stdio.h>
void main()
{
	int Fnum,Snum;
	printf("\n Enter First Number : ");
	scanf("%d",&Fnum);
	printf("\n Enter Second Number : ");
	scanf("%d",&Snum);
	printf("\n Addition is       : %d",Fnum+Snum);
	printf("\n Subtraction is    : %d",Fnum-Snum);
	printf("\n Multiplication is : %d",Fnum*Snum);
	printf("\n Division is       : %d",Fnum/Snum);
	printf("\n Modulus is        : %d",Fnum%Snum);
	getch();
}
