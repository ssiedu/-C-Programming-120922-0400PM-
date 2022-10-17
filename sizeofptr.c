#include<stdio.h>
void main()
{
	int *iptr=NULL;
	float *fptr=NULL;
	char *cptr=NULL;
	
	printf("\n size of integer pointer : %d",sizeof(iptr));
	printf("\n size of float pointer : %d",sizeof(fptr));
	printf("\n size of charcater pointer : %d",sizeof(cptr));
	
	getch();
}
