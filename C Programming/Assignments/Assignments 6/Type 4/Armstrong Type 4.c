//Armstrong num with function type 4 with parmter with return type

#include<stdio.h>
int getArmstrong(int);//declaration
void main()
{
	int n;
	printf("Enter any num: ");
	scanf("%d",&n);
	int res=(getArmstrong(n));//call
	if(res==1)
	   printf("Armstron num ");
	else
	    printf("Not Armstron num ");
	
}

int getArmstrong(int n)//defination
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
	    return 1;
	  else
	    return 0;
}