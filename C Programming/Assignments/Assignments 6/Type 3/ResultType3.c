//Calculate result with function Type 3
#include<stdio.h>
void getResult(int);//declaration
void main()
{
	int marks;
	printf("Enter the marks: ");
	scanf("%d",&marks);
	 getResult(marks);//call
}

void getResult(int marks)//defination
{

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