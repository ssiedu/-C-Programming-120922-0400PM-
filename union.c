#include<stdio.h>
#include<string.h>
union Data
{
	int i;
	float f;
	char ch[10];
};
void main()
{
	union Data d;
	//printf("\n size of union : %d ",sizeof(d));
	d.i=100;
	printf("\n Integer value : %d",d.i);
	d.f=12.34;
	printf("\n Float value  : %.2f",d.f);
	strcpy(d.ch,"Ram");
	printf("\n character value : %s",d.ch);
	
	getch();	
}
