#include <stdio.h>
void mystrncat(char dest[],char src[], int n);
void main() 
{
    char dest[50]="Hello ";
    char src[]="Vaibhav";
    mystrncat(dest,src,4); 
    printf("Concatenated string: %s\n",dest);
}

void mystrncat(char dest[],char src[], int n) 
{
    int i=0,j=0;
    while (dest[i]!='\0')
	{
        i++;
    }

    while (j<n && src[j]!='\0') 
	{
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i]='\0';
}
