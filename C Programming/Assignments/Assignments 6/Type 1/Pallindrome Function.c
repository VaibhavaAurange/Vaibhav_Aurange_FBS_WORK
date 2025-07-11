//Pallindrome or not with function
//pallindrome with function

#include<stdio.h>
void getPallindrome();//declaration
void main()
{
	getPallindrome();//call
}

void getPallindrome()//defination
{
	int no=121;
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