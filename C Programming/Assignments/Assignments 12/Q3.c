//WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int n;
	printf("Enter the string:");
	scanf("%s",str);
	printf("Enter the index of character to remove:");
    scanf("%d", &n);
    int len=strlen(str);
    
    for (int i=n;i<len;i++) 
	{
        str[i]=str[i+1];
    }
    printf("new string: %s\n",str);
}