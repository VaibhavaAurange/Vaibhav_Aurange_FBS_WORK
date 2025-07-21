//strstr()= first occurrence of the sub string
#include <stdio.h>
#include <string.h>
void main() 
{
    char str[]="FirstBit is the best and Teaching staff is also best";
    char sub[]="best";

    char *ptr=strstr(str, sub);

    if (ptr!=NULL) 
	{
        printf("Substring \"%s\" found at position: %ld\n", sub,ptr-str);
    } 
	else 
	{
        printf("Substring \"%s\" not found.\n", sub);
    }

}
