// strncmp()= Compares two strings num
#include <stdio.h>
#include <string.h>
void main() 
{
    char str1[]="FirstBit";
    char str2[]="FirstBench";

    int result=strncmp(str1,str2,5);

    if (result==0) 
	{
        printf("First 5 characters are equal.\n");
    } 
	else if (result < 0) 
	{
        printf("str1 is less than str2 in the first 5 characters.\n");
    } 
	else 
	{
        printf("str1 is greater than str2 in the first 5 characters.\n");
    }
}
