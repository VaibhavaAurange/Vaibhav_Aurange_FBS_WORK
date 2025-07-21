//strchr()= Occurance of char in string calculte first occurance
#include <stdio.h>
#include <string.h>

void main() 
{
    char str[]="FirstBit is the Best";
    char ch='B';

    char *ptr=strchr(str, ch);

    if (ptr!=NULL) 
	{
        printf("Character '%c' found at position: %ld\n",ch,ptr-str);
    } 
	else 
	{
        printf("Character '%c' not found in the string.\n",ch);
    }

}
