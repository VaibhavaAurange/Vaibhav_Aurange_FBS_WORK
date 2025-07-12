// Eligible for vote function type 4
#include<stdio.h>
int isVoter(int);//declartion
void main()
{
	int age;
	printf("Enter the age: ");
	scanf("%d", &age);
	int res=isVoter(age);//call
	if(res==1)
    	printf("Eligible for the vote");
	else
	    printf ("Not Eligible for the vote");
}
int  isVoter(int age)//defination
{
	if (age>=18)
	{
		return 1;
	}
		else
			return 0;
		
}