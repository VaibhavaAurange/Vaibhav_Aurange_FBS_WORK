//Perfect num with function Type 2
#include<stdio.h>
int getPerfectNum();//declaration
void main()
{
	if(getPerfectNum()==1)//call
	{
		printf("Perfect num ");
	}
	else
	  	printf("Not Perfect num ");
}

int getPerfectNum()//defination
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
		return 1;
	}
	else
		return 0;
}