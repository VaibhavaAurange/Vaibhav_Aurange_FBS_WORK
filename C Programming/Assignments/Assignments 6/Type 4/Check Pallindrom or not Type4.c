//check pallindrom or not with Type 4
#include<stdio.h>
int	isPallindrome(int);
void main()
{
	int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	if(isPallindrome(no)==1)//call
	{
	printf("is pallindrome");
    }
    else
	printf("is not pallindrome");
}

int	isPallindrome(int no)//defination
{
	int r1,r2,r3,rev,temp;
	int q1;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	
	rev=r1*100+r2*10+r3;
	
	if(rev==no)
	{ 
	return 1;
	}
	else
	{
		return 0;
	}
	
	
}