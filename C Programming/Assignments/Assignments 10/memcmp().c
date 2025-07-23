//memcmp()=is used to compare blocks of memory — not just strings.
#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[]="Vaibhav";
    char str2[]="Vaibhav";

    int result=memcmp(str1,str2,7);

    if (result==0)
    printf("Strings are equal.\n");
    else
    printf("Strings are not equal.\n");

}
