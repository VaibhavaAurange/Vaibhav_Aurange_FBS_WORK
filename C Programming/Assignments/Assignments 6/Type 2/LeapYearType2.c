// Leap Year not with function type 2 without parmeter with return type
#include<stdio.h>

//declaration
int getLeapYear();
int year;
void main()
{   int year;
	if(getLeapYear()==1)//call
	{
	   printf ("%d year is leap",year);	
	}
	else
    	printf ("%d year not leap",year);
}

int getLeapYear()//defination
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
