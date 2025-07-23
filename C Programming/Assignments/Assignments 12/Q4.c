//WAP to Form a New String where the First Character and the Last Character havebeen Exchanged
#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int temp;
	printf("Enter the string:");
	scanf("%s",str);
	int len=strlen(str);
	
	temp=str[0];
    str[0]=str[len-1];
    str[len-1]=temp;

    printf("String after First Char & Last Char havebeen Exchanged: %s\n",str);
}