//strncat()= Concatenated Num string
#include <stdio.h>
#include <string.h>  

void main() 
{
    char str1[100] = "I am ";
    char str2[] = "Developer Vaibhav";

    strncat(str1, str2, 9);  

    printf("Resulting string: %s\n", str1);
}
