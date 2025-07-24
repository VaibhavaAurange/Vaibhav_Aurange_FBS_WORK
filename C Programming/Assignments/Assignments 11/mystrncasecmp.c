#include <stdio.h>
int mystrncasecmp(char str1[],char str2[], int n);
void main() 
{
    char s1[]="Vaibhav";
    char s2[]="vaibHaV";

    int result=mystrncasecmp(s1, s2, 7);
    if (result==0)
    printf("Strings are equal\n");
    else
    printf("Strings are not equal\n");
}

int mystrncasecmp(char str1[],char str2[], int n)
{
    int i;
    for (i=0;i<n;i++) 
	{
        char ch1=str1[i];
        char ch2=str2[i];
        if (ch1>='A' && ch1<='Z') 
		{
		ch1 += 32;
		}
        if (ch2>='A' && ch2<='Z') 
		{
		ch2 += 32;
        }
        if (ch1!=ch2 || ch1=='\0' || ch2=='\0')
        return ch1-ch2;
    }
    return 0;
}
