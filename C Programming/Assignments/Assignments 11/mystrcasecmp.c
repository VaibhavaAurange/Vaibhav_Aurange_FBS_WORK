#include <stdio.h>
int mystrcasecmp(char *str1,char *str2);
void main() 
{
    char str1[]="Hello";
    char str2[]="hello";

    int result=mystrcasecmp(str1, str2);
    if (result==0)
    printf("Strings are equal\n");
    else
    printf("Strings are not equal\n");
}

int mystrcasecmp(char *str1,char *str2) 
{
    int i = 0;
    while (str1[i]!='\0' && str2[i]!='\0') 
	{
        char ch1=str1[i];
        char ch2=str2[i];
        if (ch1>='A' && ch1<='Z') 
		{
			ch1=ch1+32;
		}
        if (ch2>='A' && ch2<='Z') 
		{
		    ch2=ch2+32;
        }
        if (ch1!=ch2)
            return ch1-ch2;
        i++;
    }
    return str1[i]-str2[i];
}
