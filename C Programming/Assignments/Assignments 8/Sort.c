//10.sort the array 
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the element in array:");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	printf("\nThe Array arr: ");
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
	
	int temp;
	for(int i=0;i<5-1;i++) 
	{
        for(int j=0;j<5-1-i;j++) 
		{ 
            if(arr[j]>arr[j+1]) 
			{
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\nSorted array in ascending order:\n");
    for(int i=0;i<5;i++)
        printf("%d ", arr[i]);
}