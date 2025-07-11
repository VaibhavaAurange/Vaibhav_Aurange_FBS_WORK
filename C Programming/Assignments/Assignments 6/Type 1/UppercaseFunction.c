//Uppercase or lowercase in functions

#include<stdio.h>
void getUpperOrLowercase();//declaration

void main()
{
	getUpperOrLowercase();//call
}

void getUpperOrLowercase()//defination
{
	
	char ch;
	printf("Enter the Character: ");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("Character is Uppercase ");
	}
	else
	{ 
	    printf("Character is Lowercase ");
	}
}