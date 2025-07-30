//Find count of num
#include<stdio.h>
void main()
{
	int*arr=(int*)malloc(sizeof(int)*5); 
	printf("Enter the element in array:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	printf("\nThe array:");
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
	
	printf("\nThe Count of num:");
	int count=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==4)
		count++;
	}
	 printf("%d",count);
	
}