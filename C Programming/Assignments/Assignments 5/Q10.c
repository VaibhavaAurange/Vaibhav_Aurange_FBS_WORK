//Print a hollow square with diagonal pattern
void main()
{
	int n;
	printf("Enter the n: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||j==0||i==n-1||j==n-1||i==j)
			{
				printf("* ");
			}
			else
			printf("  ");
			
		}
		printf("\n");
	}
}