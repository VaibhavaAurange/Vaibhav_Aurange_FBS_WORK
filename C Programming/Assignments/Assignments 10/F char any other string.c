//strpbrk()= Finds the first character in a string that matches any character from another string.
#include <stdio.h>
#include <string.h>
void main() 
{
    char str1[]="Vaibhav Aurange";
    char str2[]="aeiou"; 

    char *ptr = strpbrk(str1, str2);

    if (ptr!=NULL) 
	{
        printf("First vowel found: %c\n", *ptr);
    } 
	else 
	{
        printf("No matching character found.\n");
    }

}
