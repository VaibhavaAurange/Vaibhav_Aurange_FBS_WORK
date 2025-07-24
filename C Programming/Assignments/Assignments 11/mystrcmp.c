#include <stdio.h>
int mystrcmp(char* ,char*);
void main() 
{
    char str[]="Vaibhav";
    char ptr[]="Vaibhav";
    int result=mystrcmp(str,ptr);
    if (result==0)
	{
        printf("Strings are equal\n");
    }
    else
      printf("String are not equal");  
}

int mystrcmp(char* str,char* ptr) 
{
    int i = 0;
    while (str[i]!='\0' && ptr[i]!='\0') 
	{
        if (str[i]!=ptr[i])
		{
		   return 1;
           i++;
        }
        else
        {
        	return 0;
		}
    }
}

