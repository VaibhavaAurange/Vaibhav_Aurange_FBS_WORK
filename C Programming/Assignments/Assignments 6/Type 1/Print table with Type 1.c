//print table with type 1
#include<stdio.h>
void getTable();//declartion
void main()
{
	getTable();//call
}
void getTable()//definaton
{
	int n=5;
	int a=1;
	while(a<=10)
	{
		printf("%d ",n*a);
		a++;
	}
	
}