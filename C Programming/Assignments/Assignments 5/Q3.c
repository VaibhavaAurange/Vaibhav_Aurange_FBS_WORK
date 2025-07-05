//Print an inverted right-angled triangle pattern  n=5
void main ()
{
	int n;
	printf("Enter the num n: ");
	scanf("%d",&n);
	
	for (int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}  
		   printf("\n");
	}
}
