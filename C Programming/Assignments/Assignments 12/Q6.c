//WAP to Take in a String and Replace Every Blank Space with special symbol.
#include<stdio.h>

void main()
{
	char str[50];
	printf("Enter the string:");
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]='@';
		}
	}
	printf("New string:%s",str);
}