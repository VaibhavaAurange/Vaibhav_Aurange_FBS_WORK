//eligble for the vote with function type 2
#include<stdio.h>
int Voting();//declartion
void main()
{
	if(Voting()==1)//call
	{
	  printf("Eligible for the vote");	
	}
	else
	printf ("Not Eligible for the vote");
}
int Voting()//defintion
{
	int age;
	printf("Enter the age: ");
	scanf("%d", &age);
	if (age>=18)
	{
		return 1;
	}
	else
	   return 0;
		 
}