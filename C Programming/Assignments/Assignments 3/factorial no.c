//factorial no
void main()
{
	int n,fact=1;
	printf("Enter a num: ");
	scanf("%d", &n);
	
	int a=1;
	
	while(a<=n)
	{
		fact=fact*a;
		a++;
	}
	printf("factorial= %d\n",fact);
}