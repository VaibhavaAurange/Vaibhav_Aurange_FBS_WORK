//check odd or even with function type 4
#include<stdio.h>
int isOddOrEven(int);//declartion
void main()
{
	int no;
	printf("Enter the no: ");
	scanf("%d",&no);
	int res=isOddOrEven(no);//call
	if(res==1)
		printf("%d no is even",no);
	else
	   	printf ("%d no is odd",no);
	
}
int isOddOrEven(int no)//defination
{

	if (no%2==0)
	{
		return 1;
	}
	else
		return 0;
	
}