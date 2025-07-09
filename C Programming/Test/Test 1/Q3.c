//Q3-Print last 2 digit of number Ex-223410 o/p=10
#include<stdio.h>
void main()
{
	int n,res;
	printf("Enter the no: ");
	scanf("%d",&n);
	
	res=n%100;
	printf("The last 2 Digit are: %d",res);
	
}