#include <stdio.h>
void mystrrev(char str[]);
void main() 
{
    char str[]="Vaibhav";
    mystrrev(str);
    printf("Reversed string: %s\n",str);
}

void mystrrev(char str[]) 
{
    int i, j;
    char temp;

    for (j=0;str[j]!='\0';j++);
    j=j-1;

    for (i=0;i<j;i++,j--) 
	{
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
