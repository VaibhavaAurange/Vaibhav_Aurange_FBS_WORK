//Write a program to scan string from user then scan a single character and search it in a accepted string.
#include<stdio.h>
void main()
{
	char str[50],ch;
	int found=0;
	printf("Enter a string:");
	scanf("%s",str);
	printf("%s",str);
	
	printf("\nEnter the charcter you want to search:");
	fflush(stdin);
	scanf("%c",&ch);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			printf("Character '%c' found at position %d\n",ch,i);
			found=1;
		}	
	}
}