//Sum of the num with type 4 
#include<stdio.h>
int getSumRange(int,int);//declartion
void main()
{
	int start,end;
	printf("Enter start num: ");
	scanf("%d", &start);
	printf("Enter end num: ");
	scanf("%d", &end);
	
	int res=getSumRange(start, end);//call
	printf("Sum=%d",res);
	
	
}
int getSumRange(int start, int end)//defination
{
	int a=start,sum=0;
	while(a<=end)
	{
		sum=sum+a;
		a++;
	}
	return sum;
}