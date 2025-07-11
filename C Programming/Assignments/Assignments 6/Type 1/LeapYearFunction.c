// Leap Year not with function
#include<stdio.h>

//declaration
void getLeapYear();
void main()
{
	getLeapYear();//call
}

void getLeapYear()//defination
{
	int year;
	printf("Enter the year: ");
	scanf("%d" ,&year);
	if (year%4==0 && year%100!=0||year%400==0)
	{
		printf ("%d year is leap",year);
	}
	else
	{
		printf ("%d year not leap",year);
		
	}
}
