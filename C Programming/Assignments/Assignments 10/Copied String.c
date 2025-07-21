// strcpy()= copied string
#include <stdio.h>
#include <string.h> 
void main() 
{
    char str[] = "Vaibhav Aurange";
    char ptr[50]; 

    strcpy(ptr,str); 

    printf("Source string: %s\n",str);
    printf("Copied string: %s\n",ptr);

}
