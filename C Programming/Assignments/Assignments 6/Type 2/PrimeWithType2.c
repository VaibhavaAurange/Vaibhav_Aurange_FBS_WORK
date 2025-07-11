//Given no is prime or not with function type 2
#include<stdio.h>
int getPrime();//declartion
void main()
{
	int res=getPrime();//call
	if(res==1)
	  printf("The num is prime ");
	else
	 printf("The num not prime ");
}
int getPrime()//defination
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
        return 1;
    else
        return 0;

}