//memmove()=
#include <stdio.h>
#include <string.h>

void main()
{
    char str[]="VaibhavAurange";

    memmove(str+5,str,7);

    printf("After memmove: %s\n",str);
}
