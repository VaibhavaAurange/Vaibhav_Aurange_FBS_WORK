// sum of no range with function type 2
# include<stdio.h>
int SumRange();//declartion
void main()
{
	int res=SumRange();//call
	printf("Sum=%d",res);
}
int SumRange()//defination
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
	return sum;
}