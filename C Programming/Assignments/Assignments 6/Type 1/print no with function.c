//print no 1 to 10 with function
#include<stdio.h>
void getPrint();//declartion
void main()
{
	getPrint();//call
}

void getPrint()//defintion
{
	int a=1;
	while(a<=10)
	{
		printf("%d ",a);
		a++;
	}
}