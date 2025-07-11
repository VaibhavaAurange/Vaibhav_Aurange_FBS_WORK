//Calculate result with function
#include<stdio.h>
void getResult();//declaration
void main()
{
	 getResult();//call
}

void getResult()//defination
{
		int marks;
	printf("Enter the marks: ");
	scanf("%d",&marks);
	if(marks>75)
	{
		printf("Distinction");
	}
	else
	{
		if (marks>65)
		{
			printf("First class");
		}
		else
		{
			if(marks>55)
			{
				printf("Second class");
			}
			else
			{
				if(marks>=40)
				{
					printf("Pass class");
				}
				else
				{
					if(marks<40)
					{
						printf("Fail");
					}
				}
			}
		}
	}
	
}