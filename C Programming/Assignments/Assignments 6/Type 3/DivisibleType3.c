///Accept a number and check if it is divisible by 3, 5, or both.with Function
#include<stdio.h>
void getDivisible(int);//declaration
void main()
{   
    int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	getDivisible(no);//call
}

void getDivisible(int no)//defination
{
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