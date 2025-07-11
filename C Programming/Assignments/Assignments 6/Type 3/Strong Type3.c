//Sum of Firt and Last Digit with function Type 3
#include<stdio.h>
void getSumFirstLast(int);//declaration
void main()
{
	int n;
	printf("Enter the num: ");
	scanf("%d",&n);
	getSumFirstLast(n);//call
}

void getSumFirstLast(int n)//defination
{
	int num,f,l,sum;
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