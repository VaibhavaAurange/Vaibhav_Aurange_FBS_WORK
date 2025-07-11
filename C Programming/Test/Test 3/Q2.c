//Wap to add alternate num from given range
// start:1 end:5
//op sum=9
#include <stdio.h>

void main() 
{
    int start, end, sum = 0;

    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter end value: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i =i+ 2) 
	{
        sum = sum + i; 
    }

    printf("Sum = %d", sum);
}
