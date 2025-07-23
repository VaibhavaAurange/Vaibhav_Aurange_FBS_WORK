//strtok()= used to split a string into smaller parts,

#include <stdio.h>
#include <string.h>
void main() 
{
    char str[]="Vaibhav Suresh Aurange";
    
    char *token=strtok(str, " ");  

    while (token!=NULL) 
	{
        printf("%s\n", token);
        token=strtok(NULL, " ");
    }

}
