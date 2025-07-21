// strspn()= Finds the length of the initial part of a string that only contains characters from another string.
#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[] = "VaibhavAurange12345";
    char str2[] = "Vaibhav";

    int length = strspn(str1, str2);

    printf("Initial matching characters count: %d\n", length);

}
