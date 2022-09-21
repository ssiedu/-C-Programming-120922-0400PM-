#include<stdio.h>
void main()
{
	float p,r,t,si,total_amount;
	printf("\n Enter principle amount : ");
	scanf("%f",&p);
	printf("\n Enter rate of interest : ");
	scanf("%f",&r);
	printf("\n Enter time in year : ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("\n total interest : %.2f",si);
	total_amount = p+si;
	printf("\n total amount : %.2f",total_amount);
	getch();
}
