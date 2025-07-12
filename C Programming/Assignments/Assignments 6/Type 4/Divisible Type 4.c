///Accept a number and check if it is divisible by 3, 5, or both.with Function type 4 with parmter with return type 

#include<stdio.h>
int getDivisible(int);//declaration
void main()
{
	int no;
	int res= getDivisible(no);//call
	if(res==1)
	printf("Divisible by both");
	else if (res==2)
		printf("Divisible by 5 but not by 3");
	else if (res==3)
	    printf("Divisible by 3 but not 5");
	else 
	    printf("Divisible by none");
}

int getDivisible(int no)//defination
{
	
	
	printf("Enter the no: ");
	scanf("%d",&no);
	if(no%3==0 && no%5==0)
	{
		return 1;
	}
	else if(no%5==0)
		return 2;
		
    else if(no%3==0)
		 return 3;
			
	else
		return 4;
				
}