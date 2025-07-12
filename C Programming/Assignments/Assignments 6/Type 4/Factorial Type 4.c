//Factorial of num with function Type 4
#include<stdio.h>
int getFactorial(int);//declaration
void main()
{
	int n;
	int fact=getFactorial(n);//call
	printf("factorial= %d\n",fact);
}

int getFactorial(int n)//defination
{
	int fact=1;
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