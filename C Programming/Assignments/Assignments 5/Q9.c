// print hollow square pattern
void main()
{
	int n;
	printf("Enter the num n: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		 {
		   if(i==1||i==n||j==1||j==n)
		   printf("* ");
		   else
		   printf("  ");
       	         } 
		   printf("\n");

	}
}
