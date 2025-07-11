// perform operation with function type 2 without parmeter with return type
#include<stdio.h>
int Opertion();
int no1, no2;
void main()
{
	int res=Opertion();//call
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
int Opertion()//defination
{

	char op;
	
	printf("Enter the First no: ");
	scanf("%d",&no1);
	
    printf("Enter the second no: ");
	scanf("%d",&no2);
	
	printf("Enter the operator(+, -, *, /, %%): ");
	scanf(" %c",&op); 
	
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
	