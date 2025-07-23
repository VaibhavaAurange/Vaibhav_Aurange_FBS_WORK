//WAP Replace all Occurrences of ‘a’ with $ in a String
#include <stdio.h>
void main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str); 
    
    for (int i=0; str[i]!='\0';i++)
 {
        if (str[i]=='a') 
	{
            str[i]='$';  
        }
 }
    printf("New string: %s\n",str);
}
