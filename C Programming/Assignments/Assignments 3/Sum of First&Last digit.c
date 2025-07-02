//Sum of First and last digit
void main()
{
	int n,num,f,l;
	int sum;
	printf("Enter the num: ");
	scanf("%d",&n);
	num=n;
	l=num%10;
	
	while(num>=10) 
	{
		num=num/10;
	}
	f=num;
	sum=f+l;
	printf("Sum of First & last= %d",sum);
	
}