//Odd or even with function
#include<stdio.h>

void getOddOrEven();//decalartion
void main()
{
	getOddOrEven();//call
}
 
void getOddOrEven()//defination
 {
 	int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	if (no%2==0)
	{
		printf("%d no is even",no);
	}
	else
	{
		printf ("%d no is odd",no);
	}
 }
 