//6.Date (date, month, year) with function
#include<stdio.h>
struct Date 
{
	int date;
	int month;
	int year;
};
struct Date storeDate();
void displayDate(struct Date);
void main()
{
	struct Date D1,D2;
	D1=storeDate();
	D2=storeDate();
	
	displayDate(D1);
	displayDate(D2);
}
struct Date storeDate()
{
	struct Date temp;
	printf("Enter the date: ");
	scanf("%d %d %d",&temp.date,&temp.month,&temp.year);
	return temp;
}
void displayDate(struct Date temp)
{
	printf("Date D1=%d-%d-%d\n",temp.date,temp.month,temp.year);
}