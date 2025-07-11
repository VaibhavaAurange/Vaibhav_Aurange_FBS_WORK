//Factorial of num with function
#include<stdio.h>
void getFactorial();//declaration
void main()
{
	getFactorial();//call
}

void getFactorial()//defination
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
	printf("factorial= %d\n",fact);
}