#include <stdio.h>
char* mystrrchr(char *str, char ch);
void main() 
{
    char str[]="Vaibhav Aurange";
    char ch='a';
    char *ptr=mystrrchr(str,ch);

    if (ptr!=NULL)
    printf("Last occurrence of %c is at position: %ld\n",ch,ptr-str);
    else
    printf("Character %c not found.\n",ch);
}

char* mystrrchr(char *str,char ch) 
{
    char *last=NULL;
    while (*str!='\0') 
	{
        if (*str==ch)
        last=str;  
        str++;
    }
    return (char*)last;
}
