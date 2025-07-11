//Armstrong num with function Type 2

#include<stdio.h>
int getArmstrong();//declaration
void main()
{
	if(getArmstrong()==1)//call
	{
		 printf("Armstron num ");
	}
	else
	     printf("Not Armstron num ");
}

int getArmstrong()//defination
{
	int n, r, arm=0;
	int temp;
	printf("Enter any num: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	  if (temp==arm)
	    return 1;
	  else
	    return 0;
}