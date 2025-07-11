//Factorial of num with function type 3
#include<stdio.h>
void getFactorial(int);//declaration
void main()
{
	int n;
	printf("Enter a num: ");
	scanf("%d", &n);
	getFactorial(n);//call
}

void getFactorial(int n)//defination
{
	int fact=1;
	int a=1;
	
	while(a<=n)
	{
		fact=fact*a;
		a++;
	}
	printf("factorial= %d\n",fact);
}