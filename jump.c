#include<stdio.h>
void main()
{
	int i;
	
	printf("\n Numbers : \n");
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			goto XYZ;//continue;//break;
		}
		printf("\n %d",i);//1 2 3 4 5 10
	}
	XYZ : 
		printf("\n We use goto statement ");
	getch();
}
