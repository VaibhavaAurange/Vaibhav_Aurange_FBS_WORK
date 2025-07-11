//Perfect num with function
#include<stdio.h>
void getPerfectNum();//declaration
void main()
{
	getPerfectNum();//call
}

void getPerfectNum()//defination
{
		int n,a=1,sum=0;
	printf("enter the num: ");
	scanf("%d",&n);
	
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
		printf("Perfet num ");
	}
	else
	{
		printf("Not perfet num ");
	}
}