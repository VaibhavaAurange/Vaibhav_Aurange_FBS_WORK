// sum of no range with function type 3
# include<stdio.h>
void SumRange(int, int);//declartion
void main()
{ 
	int start,end;
	
	printf("Enter start num: ");
	scanf("%d", &start);
	printf("Enter end num: ");
	scanf("%d", &end);
	SumRange(start, end);//call
}
void SumRange(int start,int end)//defination
{
	int sum=0;
	int a=start;
	while(a<=end)
	{
		sum=sum+a;
		a++;
	}
	printf("Sum=%d",sum);
}