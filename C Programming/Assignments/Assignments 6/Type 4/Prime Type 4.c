//num prime or not with Type 4
#include<stdio.h>
int isPrimeOrNot(int);//declartion
void main()
{
    int n;
	printf("Enter a num: ");
    scanf("%d", &n);
	int res=isPrimeOrNot(n);//call
	if(res==1)
	  printf("The num is prime ");
	else
	 printf("The num not prime ");
}
int isPrimeOrNot(int n)//defination
{
	int  a = 2, isPrime = 1;

    if (n <= 1) 
	{
        isPrime = 0;
    } 
	else 
	{
        while (a <= n / 2) 
		{
            if (n % a == 0) 
			{
                isPrime = 0;
                break;
            }
            a++;
        }
    }

    if (isPrime)
        return 1;
    else
        return 0;
}
