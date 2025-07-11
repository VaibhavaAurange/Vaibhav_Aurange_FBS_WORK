//Odd or even with function Type 3
#include<stdio.h>

void getOddOrEven(int);//decalartion
void main()
{
	int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	getOddOrEven(no);//call
}
 
void getOddOrEven(int no)//defination
 {

	if (no%2==0)
	{
		printf("%d no is even",no);
	}
	else
	{
		printf ("%d no is odd",no);
	}
 }
 