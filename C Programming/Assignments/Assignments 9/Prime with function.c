//6.accept array and print only prime numbers of array
#include<stdio.h>
void createArray(int *,int );// declarations
void displayArray(int *,int );
int isPrime(int num);
void printPrimeNumbers(int *arr, int size);
void main()
{
	int arr[5];
	printf("\nEnter the elemnt array arr:");
	createArray(arr,5);        //call
	printf("\nThe array arr:");
	displayArray(arr,5);
	printf("\nPrime numbers in the array are:");
    printPrimeNumbers(arr, 10);
}

void createArray(int *ptr,int size)//defination
{
	for(int i=0;i<size;i++)
	scanf("%d",&ptr[i]);
	
}

void displayArray(int *ptr,int size)
{
	for(int i=0;i<size;i++)
	printf("%d ",ptr[i]);
	
}
int isPrime(int num)
{
    if(num <= 1)
        return 0;

    for(int i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

void printPrimeNumbers(int *ptr, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(isPrime(ptr[i]))
            printf("%d ", ptr[i]);
    }
}
