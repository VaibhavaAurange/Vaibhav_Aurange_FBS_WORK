#include <stdio.h>
int mystrncmp(char *str1,char *str2, int n);
void main() 
{
    char str1[]="Vaibhav";
    char str2[]="Vaibhav";

    int result=mystrncmp(str1, str2, 5);
    if (result==0)
    printf("First 5 characters are equal.\n");
    else
    printf("First 5 characters are NOT equal.\n");
}

int mystrncmp(char *str1,char *str2, int n)
{
    int i=0;
    while (i<n) 
	{
        if (str1[i]!=str2[i] || str1[i]=='\0' || str2[i]=='\0')
        return str1[i]-str2[i];
        i++;
    }
    return 0;
}
