//check pallindrome or not with type 4
#include<stdio.h>
int isPallindrome(int);//declartion
void main()
{
	int no=121;
	int res=isPallindrome(no);//call
	if(res==1)
		printf("The no is Pallindrome ");
	else 
	   	printf("The no is  not Pallindrome ");
	
}
int isPallindrome(int no)//defination
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
		return 1;
	}
	else
	  return 0;
}