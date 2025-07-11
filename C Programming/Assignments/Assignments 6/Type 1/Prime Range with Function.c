//Prime num Range with function
#include<stdio.h>
void getPrimeRange();//declaration
void main()
{
	getPrimeRange();//call
}

void getPrimeRange()//defination
{
	int n,i,j, flag;
	printf("Enter the range: ");
	scanf("%d",&n);

	for(i=2; i<=n; i++) 
	{
		flag=1;
		for(j=2; j<i; j++)
		{
			if(i%j==0) 
			{
				flag=0;
				break;
			}
		}
		if(flag) 
		{
			printf("%d is an prime num\n",i);
		}
	}
}