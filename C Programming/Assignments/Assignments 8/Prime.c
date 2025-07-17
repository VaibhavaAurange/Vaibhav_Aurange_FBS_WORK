//6.accept array and print only prime numbers of array
#include<stdio.h>
void main()
{
	int arr[10];
	printf("Enter the element in array:\n");
	for(int i=0;i<10;i++)
	scanf("%d",&arr[i]);
	
	printf("The Array: ");
	for(int i=0;i<10;i++)
	printf("%d ",arr[i]);
	
	printf("\nPrime numbers in the array are:\n");
	int count;
    for(int i=0;i<10;i++) 
	{
        if(arr[i]>1) 
		{  
            count=0;

            for(int j=2;j<=arr[i]/2;j++) 
			{
                if(arr[i]%j==0) 
				{
                    count = 1;  
                    break;
                }
            }

            if(count==0) 
                printf("%d ", arr[i]);
        }
    }
}