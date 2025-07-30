//3. Admin (id, name, salary, allowance) with function
#include<stdio.h>
struct Admin
{  
   int id;
   char name[20];
   int salary;
   int allowance;	
};
struct Admin storeAdmin();
void displayAdmin(struct Admin);

void main()
{
	struct Admin A1,A2;
	A1=storeAdmin();
	A2=storeAdmin();
	
	displayAdmin(A1);
	displayAdmin(A2);
}
struct Admin storeAdmin()
{
	struct Admin Adm;
	printf("Enter second admin information:");
	printf("Enter id: ");
	scanf("%d",&Adm.id);
	printf("Enter name of Employee: ");
	scanf("%s",&Adm.name);
	printf("Enter salary: ");
	scanf("%d",&Adm.salary);
	printf("Enter allowance: ");
	scanf("%d",&Adm.allowance);
	return Adm;
}
void displayAdmin(struct Admin Adm)
{
	printf("Admin informations=\n");
	printf("id:%d\n",Adm.id);
	printf("name:%s\n",Adm.name);
	printf("salary:%d\n",Adm.salary);
	printf("Allowance:%d\n",Adm.allowance);
}