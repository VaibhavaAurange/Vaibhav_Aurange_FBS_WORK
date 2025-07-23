//strcoll() =is used to compare two strings in a locale-aware manner
#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[]="apple";
    char str2[]="banana";

    int result=strcoll(str1, str2);
    if (result<0)
    printf("'%s' comes before '%s'\n", str1,str2);
    else if (result > 0)
    printf("'%s' comes after '%s'\n", str1,str2);
    else
    printf("'%s' and '%s' are equal\n", str1,str2);
}
