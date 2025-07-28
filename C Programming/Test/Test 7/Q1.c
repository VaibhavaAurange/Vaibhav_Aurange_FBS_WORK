//WAP accept array & exchange the data of Xth pos to Yth pos.
#include<stdio.h>
void exchange(int arr[],int X,int Y );//declartion
void main()
{
	int arr[10];
	int n,X,Y;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter Xth position to swap: ");
    scanf("%d", &X);
    printf("Enter Yth position to swap: ");
    scanf("%d", &Y);
	
	exchange(arr,X,Y);//call
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void exchange(int arr[],int X,int Y)//defination
{
	int temp = arr[X-1];
    arr[X-1] = arr[Y-1];
    arr[Y-1] = temp;	
}