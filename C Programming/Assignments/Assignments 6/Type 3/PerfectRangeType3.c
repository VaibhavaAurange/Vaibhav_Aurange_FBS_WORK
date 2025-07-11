//Perfect num range with function Type 3
#include<stdio.h>
void getPerfectRange(int);//declaration
void main()
{
	int n;
    printf("Enter the range: ");
    scanf("%d",&n);

	getPerfectRange(n);//call
}

void getPerfectRange(int n)//defination
{
	int i,j,sum;
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