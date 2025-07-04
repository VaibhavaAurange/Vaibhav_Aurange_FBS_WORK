//Print perfect numbers in the given range 1 to n.
#include <stdio.h>

void main()
{
    int n,i,j,sum;

    printf("Enter the range: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++) 
    {
        sum=0;

        for (j=1;j<i;j++) 
        {
            if (i%j==0)
            {
                sum=sum+j; 
            }
        }

        if (sum==i)
        {
            printf("%d is an perfect no\n", i); 
        }
    }
}
