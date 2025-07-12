//perform opertion with type 4
#include<stdio.h>
int  isOperator(int, int, char);//declartion
void main()
{
	int no1, no2;
	char op;
	
	printf("Enter the First no: ");
	scanf("%d",&no1);
	
    printf("Enter the second no: ");
	scanf("%d",&no2);
	
	printf("Enter the operator(+, -, *, /, %%): ");
	scanf(" %c",&op); 
	int res =isOperator(no1, no2,op);//call
	if(res==1)
	printf("%d\n",no1+no2);
	else if(res==2)
	  printf("%d\n",no1-no2);
	else if(res==3)
	printf("%d\n",no1*no2);
	else if(res==4)
	printf("%d\n",no1/no2);
	else if(res==5)
	printf("%d\n",no1%no2);
	
	
}
int  isOperator(int no1,int no2,char op)//defination
{
	if(op=='+')
	{
		return 1;
	}
	else if(op=='-')
    	return 2;
    	
		else if(op=='*')
			return 3;
			
			else if(op=='/')
			   return 4;
				
				else if(op=='%')
					return 5;	
}