//7.Take two array and add sum in third array
//Example-
//arr[5]= {1,2, 3, 4,5}
//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}
#include<stdio.h>
void main()
{
	int*arr=(int*)malloc(sizeof(int)*5);
	int crr[5];
	printf("Enter the element in arr:\n");
	for(int i=0;i<5;i++)
	  scanf("%d",&arr[i]);
	  
    printf("The array arr:");
	for(int i=0;i<5;i++)
	  printf("%d ",arr[i]);
	  
	int*brr=(int*)malloc(sizeof(int)*5);
	printf("\nEnter the element in brr:\n");
	for(int i=0;i<5;i++)
	  scanf("%d",&brr[i]);
	
	 printf("\nThe array brr:");
	for(int i=0;i<5;i++)
	  printf("%d ",brr[i]);
	  
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	
	printf("\nSum of array in crr:");
    for (int i = 0; i < 5; i++) {
        printf("%d ", crr[i]);
    }
	
	
	
}