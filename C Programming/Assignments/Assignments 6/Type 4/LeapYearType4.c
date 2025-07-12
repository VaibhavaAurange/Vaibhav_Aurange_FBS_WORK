// Leap Year not with function type 4 with parmeter with return type
#include<stdio.h>

//declaration
int getLeapYear(int);
int year;
void main()
{   int year;
	if(getLeapYear(year)==1)//call
	{
	   printf ("%d year is leap",year);	
	}
	else
    	printf ("%d year not leap",year);
}

int getLeapYear(int year)//defination
{
	
	printf("Enter the year: ");
	scanf("%d" ,&year);
	if (year%4==0 && year%100!=0||year%400==0)
	{
		return 1;
	}
	else
	   return 0;
}
