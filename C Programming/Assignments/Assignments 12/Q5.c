//WAP to Count the Number of Vowels in a String
#include<stdio.h>
void main()
{
	char str[10];
	int count=0;
	printf("Enter the string:");
	scanf("%s",str);
	
	 for (int i=0;str[i]!='\0';i++) 
	 {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') 
		{
            count++;
        }
    }

    printf("Number of vowels in the string: %d\n",count);
}