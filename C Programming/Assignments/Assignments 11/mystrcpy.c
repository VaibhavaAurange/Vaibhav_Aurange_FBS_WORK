//mystrcpy=own copied function

#include<stdio.h>
void mystrcpy(char* ptr ,char* str);
void main() 
{
    char str[20] = "Vaibhav Aurange";
    char ptr[50]; 
    mystrcpy(ptr,str); 
    printf("Source string: %s\n",str);
    
    printf("Copied string: %s\n",ptr);

}
void  mystrcpy(char* ptr, char* str)
{
	while(*str!='\0')
	{
		*ptr=*str;
	   	ptr++;
		str++;
	}
    	*ptr='\0';
}


