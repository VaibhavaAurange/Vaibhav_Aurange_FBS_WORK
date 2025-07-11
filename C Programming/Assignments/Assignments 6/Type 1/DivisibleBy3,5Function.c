///Accept a number and check if it is divisible by 3, 5, or both.with Function
#include<stdio.h>
void getDivisible();//declaration
void main()
{
	 getDivisible();//call
}

void getDivisible()//defination
{
	
	int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	if(no%3==0 && no%5==0)
	{
		printf("Divisible by both");
	}
	else
	{
		if(no%5==0)
		{
			printf("Divisible by 5 but not by 3");
		}
		else
		{
			if(no%3==0)
			{
				printf("Divisible by 3 but not 5");
			}
			else
			{
				printf("Divisible by none");
			}
		}
	}
}