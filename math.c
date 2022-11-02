#include<stdio.h>
#include<math.h>
void main()
{
	printf("\n ceil function : %.2f",ceil(10.3));
	printf("\n ceil function : %.2f",ceil(10.9));
	
	printf("\n floor function : %.2f",floor(10.2));
	printf("\n floor function : %.2f",floor(10.8));
	
	printf("\n sqrt function  : %.2f",sqrt(25));
	printf("\n sqrt function  : %.2f",sqrt(7));
	
	printf("\n power function : %.2f",pow(2,3));
	printf("\n power function : %.2f",pow(2.1,2.2));
	
	printf("\n abs function   : %d",abs(-25));
	
	getch();
}
