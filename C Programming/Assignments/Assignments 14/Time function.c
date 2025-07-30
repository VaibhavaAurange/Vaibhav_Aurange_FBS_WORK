//7. Time (hour, min, sec) with function
#include<stdio.h>
struct Time 
{
	int hour;
	int min;
	int sec;
};
struct Time storeTime();
void displayTime(struct Time);
void main()
{
	struct Time T1,T2;
	T1=storeTime();
	T2=storeTime();
	
	displayTime(T1);
	displayTime(T2);
}
struct Time storeTime()
{
	struct Time temp;
	printf("Enter the Time: ");
	scanf("%d %d %d",&temp.hour,&temp.min,&temp.sec);
	return temp;
}
void displayTime(struct Time temp)
{
	printf("Time =%d:%d:%d\n",temp.hour,temp.min,temp.sec);
}