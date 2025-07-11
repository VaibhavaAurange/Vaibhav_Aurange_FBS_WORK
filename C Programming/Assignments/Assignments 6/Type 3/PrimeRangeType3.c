//Prime num Range with function type 3
#include<stdio.h>
void getPrimeRange(int);//declaration
void main()
{
	
	int n;
	printf("Enter the range: ");
	scanf("%d",&n);

	getPrimeRange(n);//call
}

void getPrimeRange(int n)//defination
{
	int i,j, flag;
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