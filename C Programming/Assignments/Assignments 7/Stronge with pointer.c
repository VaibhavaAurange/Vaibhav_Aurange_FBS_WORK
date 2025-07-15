//Stronge num with pointer
#include<stdio.h>
void getStrongeNum(int*);//declaration
void main()
{
	int n;
	printf("Enter the no: ");
	scanf("%d",&n);
	getStrongeNum(&n);//call
}

void getStrongeNum(int* n)//defination
{
	int temp, num, sum=0;
	temp=*n;
	
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
	if (sum==*n)
	printf(" The Number is a stronge ");
	else
	printf(" The Number is not stronge ");
}