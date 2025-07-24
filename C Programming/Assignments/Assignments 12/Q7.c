//WAP to Remove the Characters of Odd Index Values in a String
#include <stdio.h>
void main()
{
    char str[50],result[50];
    int j=0;

    printf("Enter a string: ");
    scanf("%s",str); 

    for(int i=0;str[i]!='\0';i++)
    {
        if(i%2==0)  
        {
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';  
    printf("String after removing odd index characters: %s",result);
}
