//Print a solid square pattern n=4
void main()
{   int n;
    printf("Enter the n: ");
    scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}