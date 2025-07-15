// Leap Year not with pointer
#include<stdio.h>

//declaration
void getLeapYear(int*);
void main()
{   
    int year;
	printf("Enter the year: ");
	scanf("%d" ,&year);
	getLeapYear(&year);//call
}

void getLeapYear(int* year)//defination
{

	if (*year%4==0 && *year%100!=0||*year%400==0)
	{
		printf (" year is leap");
	}
	else
	{
		printf (" year not leap");
		
	}
}

