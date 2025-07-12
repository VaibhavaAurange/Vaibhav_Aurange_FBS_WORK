//Age with function type 4 with parmter with return type 
#include<stdio.h>
int  Age(int);//declartion
void main()
{  
    int age;
	printf("Enter the age: ");
	scanf("%d",&age);
	int res=Age(age);//call
	if(res==1)
    	printf("Child");
	else if(res==2)
    	printf("Teenager");
	else if(res==3)
		printf("Adult");		
	else if(res==4)
	   printf("senior");	
}

int  Age(int age)//defination
{
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