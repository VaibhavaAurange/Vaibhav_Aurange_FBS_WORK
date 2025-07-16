//1. Find minimum and maximum number in array.
#include<stdio.h>
void main()
{  
	int arr[5];
	printf("Enter the element in array:\n");
	for(int i=0;i<5;i++)
	  scanf("%d",&arr[i]);
	  
//	printf("The array:");
//	for(int i=0;i<5;i++)
//	  printf("%d ",arr[i]);
	  
	int max=arr[0], min=arr[0];
	for(int i=0;i<5;i++)
	  {
	  	if(arr[i]>max)
	  	max=arr[i];
	  	
	  	if(arr[i]<min)
	  	min=arr[i];
	  }
    	printf("\nmax element in arry:%d",max);
    	printf("\nmin element in arry:%d",min);
}