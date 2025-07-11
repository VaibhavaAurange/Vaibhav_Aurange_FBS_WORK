//eligble for the vote with function type 2
#include<stdio.h>
void Voting(int);//declartion
void main()
{
	int age;
	printf("Enter the age: ");
	scanf("%d", &age);
	Voting(age);//call

}
void Voting(int age)//defintion
{

	if (age>=18)
	{
	  printf("Eligible for the vote");	  
	}
	else
	   printf ("Not Eligible for the vote");
		 
}