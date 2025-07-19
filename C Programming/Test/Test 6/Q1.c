//write program , to find common elements in two arrays
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the element arr:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	int brr[5];
	printf("\nEnter the element brr:");
	for(int j=0;j<5;j++)
	scanf("%d",&brr[j]);
	
	printf("\nCommon elements of both array:");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]==brr[j])
            {
                printf("%d ",arr[i]);
                break;  
            }
        }
    }
}
