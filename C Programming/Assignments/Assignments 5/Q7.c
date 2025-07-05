//Print a  Floyd’s triangle n=5
void main()
{
	int n, a=1;
	printf("Enter the n: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}  
		   printf("\n");
	}
}