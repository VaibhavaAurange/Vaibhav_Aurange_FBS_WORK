//Perfect num with function type
#include<stdio.h>
void getPerfectNum(int);//declaration
void main()
{   
    int n;
	printf("enter the num: ");
	scanf("%d",&n);
	getPerfectNum(n);//call
}

void getPerfectNum(int n)//defination
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
		printf("Perfet num ");
	}
	else
	{
		printf("Not perfet num ");
	}
}