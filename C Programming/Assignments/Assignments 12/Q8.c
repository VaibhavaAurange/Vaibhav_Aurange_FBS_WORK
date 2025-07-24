//WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
void main()
{
	char str[50];
	int i=0,words=0;
	
	printf("Enter the string:");
	gets(str);
	
	while(str[i]!='\0')
	
	{
	if(str[i]==' '||str[i]=='\n')
	{
		words++;
	}
	  i++;
    }
	if(i>1)
	{
		words=words+1;
	}

	printf("The no words:%d",words);
}
