#include <stdio.h>

void mystrcat(char* ,char* );
void main() 
{
    char str[10]="Vaibahv ";  
    char ptr[10]="Aurange";
    mystrcat(str,ptr);
    printf("Concatenated string: %s\n",str);
}

void mystrcat(char* str,char* ptr) 
{
    int i=0, j=0;
    while (str[i]!='\0') 
	{
        i++;
    }
    while (ptr[j]!='\0') 
	{
        str[i]=ptr[j];
        i++;
        j++;
    }
    str[i]='\0'; 
}

