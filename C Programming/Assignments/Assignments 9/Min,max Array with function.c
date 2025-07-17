//1. Find minimum and maximum number in array with function
#include<stdio.h>
void storeArray(int *,int );//declartion
void displayArray(int *,int );
int maxArray(int *,int );
int minArray(int *,int );

void main()
{
	int arr[5];
	printf("Enter the element in array:\n");
	storeArray(arr,5);          //call
	printf("Display array:");
	displayArray(arr,5);
    int max=maxArray(arr,5);
    printf("\nmax element in array:%d",max);
	int min=minArray(arr,5);
    printf("\nmin element in array:%d",min);
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

int maxArray(int *ptr,int size)
{
	int max = ptr[0];
	for(int i=0;i<size;i++)
	{
	  
	  if(ptr[i]>max)
	  max=ptr[i];	
	}
	return max;
	
}

int	minArray(int *ptr,int size)
{
	int min = ptr[0];
	for(int i=0;i<size;i++)
	{
		if(ptr[i]<min)
	  	min=ptr[i];		
	}
	return min;
	
}