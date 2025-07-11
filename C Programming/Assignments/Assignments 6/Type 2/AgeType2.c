//Age with function type 2
#include<stdio.h>
int Age();
void main()
{
	int option =Age();
	if(option=1)
	printf("Child");
	else if(option=2)
	printf("Teenager");
	else if (option=3)
	printf("Adult");
	else if(option=4)
	printf("senior");
}
int Age()
{
	int age;
	printf("Enter the age: ");
	scanf("%d",&age);
	if (age<12)
	{
		return 1;
	}
	else if(age>=12 && age<=19)
			return 2;
		
	else if(age>=20 && age<=59)
		   return 3;
			
	else if(age>=60)
				return 4;
				
			
		
	
}