//Armstrong range 1 to n with function Type 3
#include<stdio.h>
void getArmstrongeRange(int);//declaration
void main()
{
	int n;
	printf("Enter the range: ");
	scanf("%d",&n);
	getArmstrongeRange(n);//call
}

void getArmstrongeRange(int n)//defination
{
	int rem,temp,sum;
	for(int i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+rem*rem*rem;
			temp=temp/10;
		}
		if(sum==i)
		{
		printf("%d\n",i);
	    }
	}
}