//print table with type 3
#include<stdio.h>
void getTable(int);//declartion
void main()
{
	int n=5;
	getTable(n);//call
}
void getTable(int n)//definaton
{
	
	int a=1;
	while(a<=10)
	{
		printf("%d ",n*a);
		a++;
	}
	
}