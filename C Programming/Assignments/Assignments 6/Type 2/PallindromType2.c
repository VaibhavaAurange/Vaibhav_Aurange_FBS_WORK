#include<stdio.h>

int Pallindrome();//declaration
void main()
{
    if(Pallindrome()==1)//call
	{
	printf("is pallindrome");
    }
    else
	printf("is not pallindrome");
}

int Pallindrome()//defination
{
	int no;
	printf("Enter the no: ");
	scanf("%d",&no);
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