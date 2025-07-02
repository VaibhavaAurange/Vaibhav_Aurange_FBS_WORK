//sum of no
void main()
{
	int start,end,sum=0;
	
	printf("Enter start num: ");
	scanf("%d", &start);
	printf("Enter end num: ");
	scanf("%d", &end);
	
	int a=start;
	while(a<=end)
	{
		sum=sum+a;
		a++;
	}
	printf("Sum=%d",sum);
}