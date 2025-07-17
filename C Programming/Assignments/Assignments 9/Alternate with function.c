//5.Print alternate elements in array with function
#include<stdio.h>
void storeArray(int *,int );//declartion
void displayArray(int *,int );
void getAlternate(int *,int);
void main()
{
	int arr[5];
	printf("Enter the element in array:\n");
	storeArray(arr,5);          //call
	printf("Display array:");
	displayArray(arr,5);
	printf("\nThe alternate element:");
	getAlternate(arr,5);
	
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

void getAlternate(int *ptr,int size)
{
	for(int i=0;i<size;i=i+2)
	{
		printf("%d ",ptr[i]);
	}
	
}