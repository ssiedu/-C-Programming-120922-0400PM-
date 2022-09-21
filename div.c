#include<stdio.h>
int main()
{
	int a,b;
	float res;
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	res = (float)a/b;
	printf("\n division of two numbers : %.2f",res);
	getch();
}
