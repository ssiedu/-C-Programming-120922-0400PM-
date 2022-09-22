#include<stdio.h>
#define pi 3.14
void main()
{
	float r;
	float area;
	printf("Enter Radius : ");
	scanf("%f",&r);
	area = pi*r*r;
	printf("\n Area of circle : %.3f",area);
	getch();
	
}
