//Stronge num with function
#include<stdio.h>
void getStrongeNum();//declaration
void main()
{
	getStrongeNum();//call
}

void getStrongeNum()//defination
{
	int n,sum=0;
	int temp, num;
	printf("Enter the no: ");
	scanf("%d",&n);
	temp=n;
	
	while (temp!=0)
	{
		num=temp%10;
		int fact=1;
		int i=num;
		while(i>1)
		{
			fact=fact*i;
			i--;
		}
		sum=sum+fact;
		temp=temp/10;	
	}
	if (sum==n)
	printf("%d The Number is a stronge ",n);
	else
	printf("%d The Number is not stronge ",n);
}