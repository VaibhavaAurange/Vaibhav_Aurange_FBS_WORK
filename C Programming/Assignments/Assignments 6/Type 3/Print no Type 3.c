//print no with function type 3
#include<stdio.h>

void getPrint(int start, int end);//declartion

void main()
{
    int a = 1, b = 10;
    getPrint(a, b); // Call 
}

void getPrint(int start, int end)//defination
{
    while(start <= end)
    {
        printf("%d ", start);
        start++;
    }
}
