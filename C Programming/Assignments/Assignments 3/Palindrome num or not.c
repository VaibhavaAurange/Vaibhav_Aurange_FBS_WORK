// Palindrome num or not 
void main()
{
	int n, temp, rev=0;
	int r1;
	printf("Enter a num: ");
	scanf("%d",&n);
	temp=n;
	
	while(temp!=0)
	{
		r1=temp%10;
		rev=rev*10+r1;
		temp=temp/10;
	}
	if (rev==n)
	printf("The num is Palindrome ");
	else
	printf("The num is not Palindrome ");
	 
}