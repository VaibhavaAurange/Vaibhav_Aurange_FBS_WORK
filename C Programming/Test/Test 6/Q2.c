//wap a program find two maximum num in array
#include<stdio.h>
void main()
{
    int arr[10];
    int Max1,Max2;

    printf("Enter elements in the array:\n");
    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]); 

    Max1=Max2=arr[0];

    for(int i=1;i<10;i++)  
    {
        if(arr[i]>Max1)  
        {
            Max2=Max1;
            Max1=arr[i];     
        }
        else if(arr[i]>Max2&&arr[i]!=Max2)
        {
            Max2= arr[i];
        }
    }

    printf("First max num: %d\n",Max1);
    printf("Second max num: %d\n",Max2);
}
