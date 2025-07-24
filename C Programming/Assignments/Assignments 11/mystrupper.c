#include<stdio.h>

void mystrupper(char*);
void main()
{
	char str[]="Vaibhav Aurange";
	mystrupper(str);
	printf("The upper case string: %s\n",str);
}

void mystrupper(char* str)
{
	if (*str=='\0')
	return;
    if (*str>='a' && *str<='z') 
	{
        *str=*str-32;
    }
    mystrupper(str+1);
}
