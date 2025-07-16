//Find sum of all numbers.
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the element in array:\n");
	for(int i=0;i<5;i++)
	 scanf("%d",&arr[i]);
	
	printf("The array:");
	for(int i=0;i<5;i++)
	 printf("%d ",arr[i]);
	 
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nThe sum of element:%d",sum);
	
}