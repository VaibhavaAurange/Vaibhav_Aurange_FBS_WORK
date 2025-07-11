//Pallindrome or not with function Type 3

#include<stdio.h>
void getPallindrome(int);//declaration
void main()
{   
    int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	getPallindrome(no);//call
}

void getPallindrome(int no)//defination
{
	int r1,r2,r3,rev;
	int q1;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	
	rev=r1*100+r2*10+r3;
	printf("%d",rev);
	if(rev==no)
	{
		printf("The no is Pallindrome ");
	}
	else
	{
		printf("The no is not Pallindrome");
	}
}