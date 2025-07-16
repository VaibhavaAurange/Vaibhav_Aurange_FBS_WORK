//Reverse the given array.
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the element of array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	printf("The Array:");
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
	
	printf("The revers array:");
	for(int i=4;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}