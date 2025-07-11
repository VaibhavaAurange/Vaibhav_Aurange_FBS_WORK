//Armstrong num with function type  with parmter without return type

#include<stdio.h>
void getArmstrong(int);//declaration
void main()
{
	int n;
	printf("Enter any num: ");
	scanf("%d",&n);
	getArmstrong(n);//call
	
}

void getArmstrong(int n)//defination
{
	int temp, r, arm=0;
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	  if (temp==arm)
	    printf("Armstrong num");
	  else
	    printf("Not Armstrong num");
}