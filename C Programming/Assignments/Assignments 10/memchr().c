//memchr()= is used to search for a character (byte) in a block of memory.
#include <stdio.h>
#include <string.h>

void main() 
{
    char str[]="Vaibhav";

    char *ptr=memchr(str, 'b', 7);
    if (ptr != NULL)
    printf("Character found at position: %ld\n", ptr-str);
    else
    printf("Character not found.\n");

}
