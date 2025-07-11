//Sum of Firt and Last Digit with function
#include<stdio.h>
void getSumFirstLast();//declaration
void main()
{
	getSumFirstLast();//call
}

void getSumFirstLast()//defination
{
		int n,num,f,l;
	int sum;
	printf("Enter the num: ");
	scanf("%d",&n);
	num=n;
	l=num%10;
	
	while(num>=10) 
	{
		num=num/10;
	}
	f=num;
	sum=f+l;
	printf("Sum of First & last= %d",sum);
	
}