//2. Create a structure Time with data members as hrs, min, sec. Accept the values of all
//these members from user and display them. Also perform addition of two time variables
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
//the given time into sec.
#include<stdio.h>
typedef struct Time 
{
	int hour;
	int min;
	int sec;
}Time;

Time storetime();
void displaytime(Time temp);
Time addTime(Time T1,Time T2);
int convertToSeconds(Time t);

void main()
{
	Time T1,T2,sum;
	printf("Enter Time T1=\n");
	T1=storetime();
	
	printf("Enter Time T2=\n");
	T2=storetime();
	
	printf("time details=\n");
	displaytime(T1);
	displaytime(T2);
	
	sum=addTime(T1,T2);
	printf("\nAdded Time: ");
	displaytime(sum);
	
	printf("\nT1 in seconds: %d\n",convertToSeconds(T1));
    printf("T2 in seconds: %d\n",convertToSeconds(T2));
}
Time storetime()
{
	Time temp;
	printf("Enter the Time in hour,min,sec: ");
	scanf("%d",&temp.hour);
	scanf("%d",&temp.min);
	scanf("%d",&temp.sec);
	return temp;
}

void displaytime(Time temp)
{
	printf("Time details=%d:%d:%d\n",temp.hour,temp.min,temp.sec);
}

Time addTime(Time T1,Time T2)
{
	Time result;
    result.sec = T1.sec+T2.sec;
    result.min = T1.min+T2.min;
    result.hour = T1.hour+T2.hour;
    
    if (result.sec>=60) 
	{
       result.min=result.min+result.sec/60;
       result.sec=result.sec%60;
    }
        if (result.min>=60) 
	{
        result.hour=result.hour+result.min/60;
        result.min=result.min%60;
    }
    return result;
}

int convertToSeconds(Time t) 
{
    return(t.hour*3600)+(t.min*60)+t.sec;
}