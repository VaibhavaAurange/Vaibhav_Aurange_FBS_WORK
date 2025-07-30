//2. Employee (id, name, salary) with function
#include<stdio.h>
struct Employee
{
	int id;
	char name[20];
	int salary;
};
struct Employee storeEmployee();
void displayEmployee(struct Employee);
void main()
{
	struct Employee E1,E2;
	E1=storeEmployee();
	E2=storeEmployee();
	
	displayEmployee(E1);
	displayEmployee(E2);
	
}
struct Employee storeEmployee()
{
	struct Employee Empl;
	printf("Enter second Employee information: ");
	printf("Enter id: ");
	scanf("%d",&Empl.id);
	printf("Enter name of Employee: ");
	scanf("%s",&Empl.name);
	printf("Enter salary: ");
	scanf("%d",&Empl.salary);
	return Empl;
}
void displayEmployee(struct Employee Empl)
{
	printf("Employee information =\n");
	printf("id:%d\n",Empl.id);
	printf("name:%s\n",Empl.name);
	printf("salary:%d\n",Empl.salary);
	
}