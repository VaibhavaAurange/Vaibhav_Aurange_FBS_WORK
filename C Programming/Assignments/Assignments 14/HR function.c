//4. HR (id, name, salary, commission) with function
#include<stdio.h>
struct HR
{
   int id;
   char name[20];
   int salary;
   int commission;
};
struct HR storeHR();
void displayHR(struct HR);

void main()
{ 
   struct HR H1,H2;
   H1=storeHR();
   H2=storeHR();
   
   displayHR(H1);
   displayHR(H2);
	
}
struct HR storeHR()
{
	struct HR temp;
	printf("Enter HR information:");
	printf("Enter id: ");
	scanf("%d",&temp.id);
	printf("Enter name of Employee: ");
	scanf("%s",&temp.name);
	printf("Enter salary: ");
	scanf("%d",&temp.salary);
	printf("Enter commission: ");
	scanf("%d",&temp.commission);
	return temp;
}
void displayHR(struct HR temp)
{
	printf("HR information=\n");
	printf("id:%d\n",temp.id);
	printf("name:%s\n",temp.name);
	printf("salary:%d\n",temp.salary);
	printf("Commission:%d\n",temp.commission);
}