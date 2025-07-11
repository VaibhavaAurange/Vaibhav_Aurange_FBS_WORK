//Sum of Firt and Last Digit with function Type 2
#include<stdio.h>
int getSumFirstLast();//declaration
void main()
{
   int sum=getSumFirstLast();//call
   	printf("Sum of First & last= %d",sum);
}

int getSumFirstLast()//defination
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
	return sum;
	
}