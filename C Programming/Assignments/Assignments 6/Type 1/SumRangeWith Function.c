// sum of no range with function
# include<stdio.h>
void SumRange();//declartion
void main()
{
	SumRange();//call
}
void SumRange()//defination
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