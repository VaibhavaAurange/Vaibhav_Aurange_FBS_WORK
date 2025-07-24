// mystrlen= create function own

#include <stdio.h>
int mystrlen(char *);
void main() 
{
    char str[10]= "Vaibhav ";
    int len=mystrlen(str);  
    printf("Length of string =%d\n",len);
}

int mystrlen(char *str) 
{
    int length=0;
    while (str[length]!='\0') 
	{
        length++;
    }
    return length;
}

