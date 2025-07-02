//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
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
	
	
