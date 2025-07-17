// 4.Find odd and even among the numbers.
#include<stdio.h>
void storeArray(int *,int );//declartion
void displayArray(int *,int );
void getEven(int *,int);
void getOdd(int *,int);

void main()
{
	int arr[5];
	printf("Enter the element in array:\n");
	storeArray(arr,5);          //call
	printf("Display array:");
	displayArray(arr,5);
	printf("\nEven numbers in array:");
	getEven(arr,5);
	printf("\nOdd numbers in array:");
	getOdd(arr,5);
	
	
}
void storeArray(int *ptr,int size)//dfination
{   for(int i=0;i<size;i++)
    scanf("%d",&ptr[i]);	
}

void displayArray(int *ptr,int size)
{	
	for(int i=0;i<size;i++)
	printf("%d ",ptr[i]);
}

void getEven(int *ptr,int size)
{
	for (int i=0; i<size;i++) 
	{
        if (ptr[i]%2==0) 
		{
            printf("%d ",ptr[i]);
        }
    }
	
}
void getOdd(int *ptr,int size)
{
	for (int i=0;i<size;i++) 
	{
        if (ptr[i]%2!= 0) 
		{
            printf("%d ",ptr[i]);
        }
    }
	
}