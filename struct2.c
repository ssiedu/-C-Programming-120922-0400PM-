#include<stdio.h>
struct Employee
{
	int id;
	char name[20];
	float sal;
};
void main()
{
	struct Employee emp;
	printf("\n Enter Employee Id :");
	scanf("%d",&emp.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",emp.name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&emp.sal);
	
	
	printf("\n Employee Details \n");
	
	printf("\n Employee Id     : %d",emp.id);
	printf("\n Employee Name   : %s",emp.name);
	printf("\n Employee salary : %.2f",emp.sal);
	
	getch();
	
	
	
}
