//Search the given num in array
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
	  
	printf("\nEnter the search elemet: ");
	int no;
	scanf("%d",&no);
	int index=-1;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==no)
		{
			index=i;
			break;
		}
	}
	if (index==-1)
	    printf("Not found");
	else
	    printf("found at %d index",index);
		
}