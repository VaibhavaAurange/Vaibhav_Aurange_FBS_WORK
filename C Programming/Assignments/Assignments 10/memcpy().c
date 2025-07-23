//memcpy()=Copy string including null terminator

#include <stdio.h>
#include <string.h>
void main() 
{
    char src[]="Vaibhav";
    char dest[20];

    memcpy(dest,src,strlen(src)+1); 

    printf("Source: %s\n",src);
    printf("Destination: %s\n",dest);

}
