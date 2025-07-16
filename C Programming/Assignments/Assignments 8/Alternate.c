//Print alternate elements in array.
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the element array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	printf("The Array: ");
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
	
	printf("\nThe alternate element:");
	for(int i=0;i<5;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}