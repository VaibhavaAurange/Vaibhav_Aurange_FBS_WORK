//Sum of first and last digit Type 4
#include<stdio.h>
int getSum(int);//declartion
void main()
{
	int n;
	printf("Enter the num: ");
	scanf("%d",&n);
    int sum=getSum(n);//call
	printf("Sum of First & last= %d",sum);
}
int getSum(int n)//defination
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
	return sum;
}