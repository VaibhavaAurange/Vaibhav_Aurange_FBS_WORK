#include <stdio.h>
void main() 
{
    int*arr=(int*)malloc(sizeof(int)*5); 
    
    printf("Enter 5 elements:\n");
    for(int i=0; i<5;i++) 
	{
        scanf("%d",&arr[i]);
    }

    printf("The Array: ");
    for(int i=0; i<5;i++)
	{
        printf("%d ",arr[i]);
    }

    printf("\nThe alternate elements: ");
    for(int i=0; i<5; i=i+2) 
	{
        printf("%d ",arr[i]);
    }
}
