//memset()= is used to initialize or reset memory quickly. It fills a block of memory with a specific value.
#include <stdio.h>
#include <string.h>

void main() 
{
    char str[20] = "Hello Vaibhav";

    printf("Before memset: %s\n",str);

    memset(str,'*',5);

    printf("After memset:  %s\n",str);

}
