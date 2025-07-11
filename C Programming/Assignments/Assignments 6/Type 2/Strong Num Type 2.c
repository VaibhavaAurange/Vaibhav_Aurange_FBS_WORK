//Stronge num with function
#include<stdio.h>
int getStrongeNum();//declaration
void main()
{
	if(getStrongeNum()==1)//call
	{
		printf("The Number is a stronge ");
	}
	else
	   printf("The Number is Not a stronge ");
}

int  getStrongeNum()//defination
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
	     return 1;
	else
	    return 0;
}