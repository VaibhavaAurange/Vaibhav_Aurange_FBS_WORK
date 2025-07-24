#include<stdio.h>

void mystrlower(char*);
void main()
{
	char str[]="VAIBHAV AURANGE";
	mystrlower(str);
	printf("The lower case string: %s\n",str);
}

void mystrlower(char* str)
{
	if (*str=='\0')
	return;
    if (*str>='A' && *str<='Z') 
	{
        *str=*str+32;
    }
    mystrlower(str+1);
}
