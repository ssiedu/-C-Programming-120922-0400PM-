#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	void *ptr;
	
	ptr=&i;
	i=20;
	printf("\n value of i : %d",i);//0//20
	printf("\n value of int ptr : %d",*(int*)ptr);//20
	
	ptr = &f;
	f=12.45;
	printf("\n value of f : %.2f",f);//0.0//12.45
	printf("\n value of ptr : %.2f",*(float*)ptr);//12.45
	
	ptr=&c;
	c='A';
	printf("\n value of c : %c",c);//0//A
	printf("\n value of ptr : %c",*(char*)ptr);//A
	
	getch();
}
