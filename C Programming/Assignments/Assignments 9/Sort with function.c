//10.sort the array with function
#include<stdio.h>
void createArray(int *,int );//  declarations
void displayArray(int *,int );
void sortArray(int * ,int );
void main()
{
	int arr[5];
	printf("\nEnter the elemnt array arr:");
	createArray(arr,5);         //call
	printf("\nThe array arr:");
	displayArray(arr,5);
	sortArray(arr,5);
	printf("\nThe sorted array is asending order:");
	displayArray(arr,5);
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

void sortArray(int * ptr,int size)
{
	int temp;
	for(int i=0;i<size-1;i++) 
	{
        for(int j=0;j<size-1-i;j++) 
		{ 
            if(ptr[j]>ptr[j+1]) 
			{
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}