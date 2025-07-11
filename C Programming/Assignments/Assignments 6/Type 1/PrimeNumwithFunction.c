//Given no is prime or not with function
#include<stdio.h>
void getPrime();//declartion
void main()
{
	getPrime();//call
}
void getPrime()//defination
{
	
    int n, a = 2, isPrime = 1;

    printf("Enter a num: ");
    scanf("%d", &n);

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
        printf("The num is prime ");
    else
        printf("The num not prime ");

}