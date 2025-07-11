// perform operation with function type 3 with parmeter without return type
#include<stdio.h>
void Opertion(int, int, char);
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
	Opertion(no1,no2,op);//call
}
void Opertion(int no1, int no2, char op)//defination
{
	//char op;
	
	
	if(op=='+')
	{
		printf("%d\n",no1+no2);
	}
	else
	{
		if(op=='-')
		{
			printf("%d\n",no1-no2);
		}
		else
		{
			if(op=='*')
			{
				printf("%d\n",no1*no2);
			}
			else
			{
				if(op=='/')
				{
					printf("%d\n",no1/no2);
				}
				else
				{
					if(op=='%')
					{
						printf("%d\n",no1%no2);
					}
				}
				}
			}
		}
}
	