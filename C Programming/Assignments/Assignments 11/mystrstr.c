#include <stdio.h>

char* mystrstr(char str[],char substr[]);

void main() {
    char str[]="Vaibhav Aurange";
    char sub[]="ran";

    char* result=mystrstr(str, sub);

    if (result != NULL)
        printf("Substring found at position: %ld\n", result-str);
    else
        printf("Substring not found.\n");
}

char* mystrstr(char str[],char substr[]) 
{
    int i,j;
    for (i=0;str[i]!='\0';i++) 
	{
        for (j=0;substr[j]!='\0';j++) 
		{
            if (str[i+j]!=substr[j])
            break;
        }

        if (substr[j]=='\0') 
        return (char*)(str + i);
    }
    return NULL; 
}
