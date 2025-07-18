#include<stdio.h>
void inputArray(int *, int );// declarations
void displayArray(int *, int);
void sumArrays(int *, int *, int *, int );

void main()
{
    int arr[5], brr[5], crr[5];

    printf("Enter the elements in arr:\n");
    inputArray(arr, 5);                    //call
    printf("The array arr: ");
    displayArray(arr, 5);

    printf("\nEnter the elements in brr:\n");
    inputArray(brr, 5);
    printf("The array brr: ");
    displayArray(brr, 5);

    sumArrays(arr, brr, crr, 5);

    printf("\nSum of arr and brr in crr: ");
    displayArray(crr, 5);
}
void inputArray(int *arr, int size)//defination
{
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void displayArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void sumArrays(int *arr1, int *arr2, int *result, int size)
{
    for(int i = 0; i < size; i++)
        result[i] = arr1[i] + arr2[i];
}
