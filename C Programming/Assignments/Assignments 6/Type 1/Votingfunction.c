// voting type 1
#include<stdio.h>
void getVoter();//declartion
void main()
{
	getVoter();//call
}
void getVoter()//defination
{
	int age;
	printf("Enter the age: ");
	scanf("%d", &age);
	if (age>=18)
	{
		printf("Eligible for the vote");
	}
		else
		{
			printf ("Not Eligible for the vote");
		}
}