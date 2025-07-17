//2.Search the given num in array with function
#include<stdio.h>
void storeArray(int *,int );//declartion
void displayArray(int *,int );
int searchNum(int *,int,int);

void main()
{
	int arr[5],temp;
	printf("Enter the element in array:\n");
	storeArray(arr,5);          //call
	printf("Display array:");
	displayArray(arr,5);
	printf("\nEnter the search element: ");
    scanf("%d", &temp); 
    int index = searchNum(arr, 5, temp); 
    if(index == -1)
        printf("Not found");
    else
        printf("Found at %d index", index);
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
int searchNum(int *ptr,int size,int temp)
{
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==temp)
            return i;
    }
    return -1;
}