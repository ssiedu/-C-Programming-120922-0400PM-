#include<stdio.h>
void main()
{
	 int a=10,b=20;
	 printf("\n Logical and : %d",((a>b)&&(a==b)));//0
	 printf("\n Logical OR  : %d",((a<b)||(a!=b)));//1
	 printf("\n Logical not : %d",(!(a>b)));//1
	 printf("\n Logical and not : %d",(!(a<b) && !(a==b)));//0
	 printf("\n Logical OR NOT : %d",(!(a>b) || (a!=b)));//1
	 printf("\n Logical and or not : %d",(!((a>b)&&(a==b))||(a!=b)));//1
	 getch();
}
