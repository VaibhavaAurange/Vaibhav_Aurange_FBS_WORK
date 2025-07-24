#include <stdio.h>

char* mystrchr(char *str, char ch);
void main() 
{
    char str[]="Vaibhav Aurange";
    char ch='A';
    char *ptr=mystrchr(str,ch);
    if (ptr!=NULL)
    printf("Character '%c' found at position: %ld\n",ch,ptr-str);
    else
    printf("Character '%c' not found.\n",ch);
}

char* mystrchr(char *str, char ch) 
{
    while (*str!='\0') 
	{
        if (*str==ch)
        return (char*)str;
        str++;
    }
    return NULL; 
}
