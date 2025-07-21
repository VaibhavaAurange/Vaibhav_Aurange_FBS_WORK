//strncpy()= Copied num of string
#include <stdio.h>
#include <string.h>  

void main() {
    char str[] = "Vaibhav Aurange";
    char ptr[20];

    strncpy(ptr, str,7);
    ptrConcatenated[7]='\0';

    printf("Copied string: %s\n",ptr);

}
