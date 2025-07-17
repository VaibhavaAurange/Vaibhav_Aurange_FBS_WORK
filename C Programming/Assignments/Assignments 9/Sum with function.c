//3.Find sum of all numbers with function
#include<stdio.h>
void storeArray(int *,int );//declartion
void displayArray(int *,int );
int getSumArray(int *,int);

void main()
{
	int arr[5];
	printf("Enter the element in array:\n");
	storeArray(arr,5);          //call
	printf("Display array:");
	displayArray(arr,5);
	int sum=getSumArray(arr,5);
	printf("\nThe sum of element:%d",sum);

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

int getSumArray(int* ptr,int size)
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+ptr[i];
	}
	return sum;
	
}