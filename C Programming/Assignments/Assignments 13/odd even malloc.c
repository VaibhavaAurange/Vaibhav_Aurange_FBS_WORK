// 4.Find odd and even among the numbers.
#include<stdio.h>
void main()
{
    int*arr=(int*)malloc(sizeof(int)*5); 
	printf("Enter the element in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	printf("The array:");
	for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
	
	printf("\nEven numbers in array:");
    for (int i=0; i<5;i++) 
	{
        if (arr[i]%2==0) 
		{
            printf("%d ",arr[i]);
        }
    }

    printf("\nOdd numbers in array:");
    for (int i=0;i<5;i++) 
	{
        if (arr[i]%2!= 0) 
		{
            printf("%d ",arr[i]);
        }
    }
    
	 	
}