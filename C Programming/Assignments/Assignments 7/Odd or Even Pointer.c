//Odd or even with pointer
#include<stdio.h>

void getOddOrEven(int*);//decalartion
void main()
{
	int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	getOddOrEven(&no);//call
}
 
void getOddOrEven(int* no)//defination
 {

	if (*no%2==0)
	{
		printf("no is even");
	}
	else
	{
		printf ("no is odd");
	}
 }
 