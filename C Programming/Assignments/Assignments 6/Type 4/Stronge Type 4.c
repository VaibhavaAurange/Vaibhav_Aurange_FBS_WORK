// check Strong num or not with Type 4
#include<stdio.h>
int isStrongeOrNot(int);//declartion
void main()
{
    int n;
	printf("Enter the no: ");
	scanf("%d",&n);
	if(isStrongeOrNot(n)==1)//call
	{
		printf("The Number is a stronge ");
	}
	else
	   printf("The Number is Not a stronge ");
}
int isStrongeOrNot(int n)//defination
{
	int temp, num,sum=0;
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