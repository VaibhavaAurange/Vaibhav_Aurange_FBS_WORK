//2. Write a program to find power of any number.
//eg.2^4=16
#include<stdio.h>
void main()
{
	int base,exp,res=1;
	printf("Enter the base no:\n");
	scanf("%d",&base);
	printf("Enter the exp no:\n");
	scanf("%d",&exp);
	
	for (int i=1; i<=exp;i++)
	{
		res=res*base;
	}
	 printf("%d^%d= %d\n",base,exp,res);
	
	
}