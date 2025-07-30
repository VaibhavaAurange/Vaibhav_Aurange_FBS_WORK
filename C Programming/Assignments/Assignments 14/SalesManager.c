//5. SalesManager (id, name, salary, incentive, target) with function
#include<stdio.h>
struct SalesManager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};
struct SalesManager storemanger();
void displaySalesManager(struct SalesManager);
void main()
{
	struct SalesManager S1,S2;
	S1=storemanger();
	S2=storemanger();
	
	displaySalesManager(S1);
	displaySalesManager(S1);
	
}

struct SalesManager storemanger()
{
	struct SalesManager temp;
	printf("Enter the salesManger information:");
	printf("Enter id: ");
	scanf("%d",&temp.id);
	printf("Enter name: ");
	scanf("%s",&temp.name);
	printf("Enter salary:");
	scanf("%d",&temp.salary);
	printf("Enter incentive:");
	scanf("%d",&temp.incentive);
	printf("Enter Target: ");
	scanf("%d",&temp.target);
	return temp;
}
void displaySalesManager(struct SalesManager temp)
{
	printf("Salesmanger information=\n");
	printf("id=%d\n",temp.id);
	printf("name=%s\n",temp.name);
	printf("salary=%d\n",temp.salary);
	printf("incentive=%d\n",temp.incentive);
	printf("target=%d\n",temp.target);
}