//Factorial of num with function Type 2
#include<stdio.h>
int getFactorial();//declaration
void main()
{
	int fact=getFactorial();//call
	printf("factorial= %d\n",fact);
}

int getFactorial()//defination
{
	int n,fact=1;
	printf("Enter a num: ");
	scanf("%d", &n);
	
	int a=1;
	
	while(a<=n)
	{
		fact=fact*a;
		a++;
	}
	 return fact;
}