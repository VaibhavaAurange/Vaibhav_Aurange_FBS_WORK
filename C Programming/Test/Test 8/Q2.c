//Write a user define function to reverse string.
#include <Stdio.h>
#include <string.h>
void reverseString(char str[]);
void main()
{ 
   char str[50];
   printf("Enter the string:");
   gets(str);
   reverseString(str);
   printf("reversed string:%s\n",str);
}
void reverseString(char str[]) 
{
    int i=0;
    int j=strlen(str)-1;
    char temp;
    while(i<j) 
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}