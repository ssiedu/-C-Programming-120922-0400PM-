#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	float salary;
}emp,emp1;
void main()
{
	//struct Employee emp,emp1;
	emp.id=101;
	strcpy(emp.name,"Ram");
	emp.salary = 67000;
	
	printf("\n Employee Id : %d",emp.id);
	printf("\n Employee Name : %s",emp.name);
	printf("\n Employee Salary : %.2f",emp.salary);
	
	emp1.id=102;
	strcpy(emp1.name,"shyam");
	emp1.salary = 78000;
	
	printf("\n Employee Id : %d",emp1.id);
	printf("\n Employee Name : %s",emp1.name);
	printf("\n Employee Salary : %.2f",emp1.salary);
	getch();
}
