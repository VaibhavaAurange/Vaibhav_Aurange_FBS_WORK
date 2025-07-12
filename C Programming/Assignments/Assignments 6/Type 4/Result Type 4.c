// check the result type 4
#include<stdio.h>
int getResult(int);//declartion
void main()
{
	int marks;
	printf("Enter the marks: ");
	scanf("%d",&marks);
	int res=getResult(marks);//call
	if(res==1)
	printf("Distinction");
	else if(res==2)
	printf("First class");
	else if(res==3)
	printf("Second class");
	else if(res==4)
	printf("Pass class");
	else 
	printf("Fail");
}
int getResult(int marks)//defination
{

	if(marks>75)
	{
		return 1;
	}
	else if (marks>65)
			return 2;
			
		else if(marks>55)
             return 3;
				
			else if(marks>=40)
					return 4;
					
				else if(marks<40)
						return 5;
}