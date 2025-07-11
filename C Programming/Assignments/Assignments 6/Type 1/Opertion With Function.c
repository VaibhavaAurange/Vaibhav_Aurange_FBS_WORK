// perform operation with function type 1 without parmeter without return type
#include<stdio.h>
void Opertion();
void main()
{
	Opertion();//call
}
void Opertion()//defination
{
	int no1, no2;
	char op;
	
	printf("Enter the First no: ");
	scanf("%d",&no1);
	
    printf("Enter the second no: ");
	scanf("%d",&no2);
	
	printf("Enter the operator(+, -, *, /, %%): ");
	scanf(" %c",&op); 
	
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
	