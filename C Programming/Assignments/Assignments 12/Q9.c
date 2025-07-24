//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions
#include<stdio.h>
void main()
{
	char str1[50],str2[50];
	int i=0;
	
	printf("Enter first string:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]>str2[i])
		{
			printf("larger string is:%s\n",str1);
			return;
		}
			if(str1[i]<str2[i])
		{
			printf("larger string is:%s\n",str2);
			return;
		}
		i++;
	}
	if(str1[i]=='\0'&&str2[i]=='\0')
	{
	 printf("both string are equal:");
	}
	else if(str1[i]=='\0')
	{
	   printf("The larger string:%s\n",str2);
	}
	else
	{
		printf("The larger string:%s\n",str1);
	}
}