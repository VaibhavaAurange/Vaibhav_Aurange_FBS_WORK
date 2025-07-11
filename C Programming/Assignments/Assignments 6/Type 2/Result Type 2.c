//Calculate result with function Type 2
#include<stdio.h>
int getResult();//declaration
void main()
{
	 int res=getResult();//call
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

int getResult()//defination
{
	int marks;
	printf("Enter the marks: ");
	scanf("%d",&marks);
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