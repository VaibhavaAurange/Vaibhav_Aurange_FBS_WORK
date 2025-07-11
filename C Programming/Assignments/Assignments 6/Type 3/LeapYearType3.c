// Leap Year not with function type 3 with parmeter without return type
#include<stdio.h>

//declaration
void getLeapYear(int);
void main()
{   
    int year;
	printf("Enter the year: ");
	scanf("%d" ,&year);
	getLeapYear(year);//call
}

void getLeapYear(int year)//defination
{

	if (year%4==0 && year%100!=0||year%400==0)
	{
		printf ("%d year is leap",year);
	}
	else
	{
		printf ("%d year not leap",year);
		
	}
}

