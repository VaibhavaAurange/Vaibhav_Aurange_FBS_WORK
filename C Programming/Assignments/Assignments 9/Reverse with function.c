//9.Reverse the given array with function
#include<stdio.h>
void storeArray(int *,int );//declartion
void displayArray(int *,int );
void getReverse(int *,int);
void main()
{
	int arr[5];
	printf("Enter the element in array:\n");
	storeArray(arr,5);          //call
	printf("Display array:");
	displayArray(arr,5);
	printf("\nThe revers array:");
	getReverse(arr,5);
	
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

void getReverse(int *ptr,int size)
{
	for(int i=4;i>=0;i--)
	{
		printf("%d ",ptr[i]);
	}
}