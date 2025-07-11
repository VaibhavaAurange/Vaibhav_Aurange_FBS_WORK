//Uppercase or Lowercase with functioon type 2
#include<stdio.h>
char UpperOrLower();//declartion
char ch;
void main()
{
	if(UpperOrLower()==1)//call
	{
	  printf("is Uppercase ");	
	}
	else
	printf ("is Lowercase ");
}
char UpperOrLower()//defintion
{
  char ch;
	printf("Enter the Character: ");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		return 1;
	}
	else
	    return 0;

}