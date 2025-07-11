//Uppercase or Lowercase with functioon type 3
#include<stdio.h>
void UpperOrLower(char);//declartion
void main()
{
	char ch;
	printf("Enter the Character: ");
	scanf("%c",&ch);
	UpperOrLower(ch);//call


}
void  UpperOrLower(char ch)//defintion
{
	
	if(ch>='A'&& ch<='Z')
	{
		printf("is Uppercase ");
	}
	else
	  	printf ("is Lowercase ");

}