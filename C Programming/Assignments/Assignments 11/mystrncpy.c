#include <stdio.h>

void mystrncpy(char *,char *, int);
void main() 
{
    char str[]="Vaibhav";
    char ptr[10];
    mystrncpy(ptr,str,8);
    printf("Copied string: %s\n",ptr);
}

void mystrncpy(char *ptr, char *str, int n)
{
    int i=0;
    while (i<n && str[i]!='\0') 
	{
        ptr[i]=str[i];
        i++;
    }

    while (i<n) 
	{
        ptr[i]='\0';
        i++;
    }
}
