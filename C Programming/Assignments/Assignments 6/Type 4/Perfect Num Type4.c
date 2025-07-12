//Num is perfect or not check with Type 4
#include<stdio.h>
int isPerfectOrNot(int);//declartion
void main()
{
	int n;
	printf("enter the num: ");
	scanf("%d",&n);
	
	if(isPerfectOrNot(n)==1)//call
	{
		printf("Perfect num ");
	}
	else
	  	printf("Not Perfect num ");
}
int isPerfectOrNot(int n)//defination
{
	int a=1,sum=0;
	
	while(a<n)
	{
		if(n%a==0)
		{
			sum=sum+a;
		}
		a++;
	}
	if(sum==n)
	{
		return 1;
	}
	else
		return 0;
}