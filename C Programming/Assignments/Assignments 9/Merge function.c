//8.Merge two array with function
#include<stdio.h>
void createArray(int *,int );// declarations
void displayArray(int *,int );
void mergedArray(int* ,int*,int*,int);
void main()
{
	int arr[5],brr[5],merge[10];
	printf("\nEnter the elemnt array arr:");
	createArray(arr,5);    //call
	printf("\nThe array arr:");
	displayArray(arr,5);
	
	printf("\nEnter the elemnt array brr:");
	createArray(brr,5);
	printf("\nThe array brr:");
	displayArray(brr,5);
	
	mergedArray(arr,brr,merge,5);
	printf("\nThe merge array:");
	displayArray(merge,10);
	 
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
void mergedArray(int*ptr1,int*ptr2,int*merge,int size)
{
	for(int i=0; i<size; i++) 
	{
        merge[i]=ptr1[i];
    }

    for(int j=0;j<size;j++) 
	{
        merge[size+j]= ptr2[j];
    }
	
	
}
