// Uppercase or lowercase with function Type 4
#include<stdio.h>
char isUpperOrLowerCase(char);//declartion
void main()
{
	char ch;
	printf("Enter the Character: ");
	scanf("%c",&ch);
	int res=isUpperOrLowerCase(ch);//call
	if(res==1)
    	printf("Character is Uppercase ");
	else
	   printf("Character is Lowercase ");
}
char isUpperOrLowerCase(char ch)//defination
{
	if(ch>='A'&& ch<='Z')
	{
	    return 1;
	}
	else
	    return 0;
}

