#include<stdio.h>
#include<string.h>
typedef struct Employee
{
	int id;
	char name[20];
	float salary;
}emp;
void main()
{
	emp e1,e2;
	e1.id=101;
	strcpy(e1.name,"Ram");
	e1.salary = 67000;
	
	printf("\n Employee Id : %d",e1.id);
	printf("\n Employee Name : %s",e1.name);
	printf("\n Employee Salary : %.2f",e1.salary);
	
	e2.id=102;
	strcpy(e2.name,"shyam");
	e2.salary = 78000;
	
	printf("\n Employee Id : %d",e2.id);
	printf("\n Employee Name : %s",e2.name);
	printf("\n Employee Salary : %.2f",e2.salary);
	getch();
}
