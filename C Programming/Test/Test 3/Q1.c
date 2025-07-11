//Q1-print even and odd num in given range.
//e.g start=10, end=25
//op odd:11 13 15 17 19
//e.g start=1, end=15
//op even:2 4 6 8 10 12

#include <stdio.h>

void main() {
    int start, end;

    printf("Enter the start value: ");
    scanf("%d", &start);

    printf("Enter the end value: ");
    scanf("%d", &end);

    
    if (start % 2 == 0) 
	{
        printf("Even numbers: ");
        for (int i = start; i <= end; i++) 
		{
            if (i % 2 == 0) 
			{
                printf("%d ", i);
            }
        }
    } 
	else 
	{
        printf("Odd numbers: ");
        for (int j = start; j <= end; j++) 
		{
            if (j % 2 != 0) 
			{
                printf("%d ", j);
            }
        }
    }
}
