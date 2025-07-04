//Print armstrong numbers in the given range 1 to n.
void main()
{
	int n,rem,temp,sum;
	
	printf("Enter the range: ");
	scanf("%d",&n);
	
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