// strcat()= Concatenated string
#include <stdio.h>
#include <string.h> 

void main() 
{
    char str1[100]="Vaibhav "; 
    char str2[]="Aurange";

    strcat(str1, str2);  

    printf("Concatenated string: %s\n", str1);
}
