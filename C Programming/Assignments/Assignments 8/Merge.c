//8.Merge two array
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the element in arr:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	printf("The Array arr:");
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
	
	int brr[5];
	printf("\nEnter the element in brr:");
	for(int i=0;i<5;i++)
	scanf("%d",&brr[i]);
	
	printf("\nThe Array brr: ");
	for(int i=0;i<5;i++)
	printf("%d ",brr[i]);
	
	int merged[10];
	for(int i=0; i<5; i++) 
	{
        merged[i]=arr[i];
    }

    for(int j=0;j<5;j++) 
	{
        merged[5+j]= brr[j];
    }

    printf("\nMerged array is:");
    for(int i = 0; i < 10; i++) 
	{
        printf("%d ", merged[i]);
    }
}