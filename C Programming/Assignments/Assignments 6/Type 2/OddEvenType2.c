//Odd or even with function type 2
#include<stdio.h>

int getOddOrEven();//decalartion
void main()
{
	if(getOddOrEven()==1)//call
	{
		printf("no is even");
	}
	else
	printf ("no is odd");
}
 
int getOddOrEven()//defination
 {
 	int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	if (no%2==0)
	{
	   return 1;
	}
	else
	  return 0;
 }
 