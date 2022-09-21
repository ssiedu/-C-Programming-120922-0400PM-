#include<stdio.h>
void main()
{
	float pi=3.14;
	float r,area;
	printf("\n Enter radius of circle : ");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\n area of circle : %.3f",area);
	getch();
}

