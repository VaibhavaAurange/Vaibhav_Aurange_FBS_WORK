//strspn()=It is used to calculate the length of the initial segment of a string that contains only characters from another string.
#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[]="VaibhavAurange612";
    char str2[]="Vaibhav612";

    size_t result = strspn(str1, str2);
    printf("initial charcter of str1 to present in str2: %zu\n",result);

}
