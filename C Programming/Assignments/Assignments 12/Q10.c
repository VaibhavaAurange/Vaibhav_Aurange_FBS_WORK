//Write a program to check the string is palindrome or not.
#include <stdio.h>
void main()
{
    char str[50];
    int length=0, isPalindrome=1;

    printf("Enter a string: ");
    scanf("%s",str);

    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]=='\n') 
		break; 
        length++;
    }


    for(int i=0; i<length/2;i++)
    {
        if(str[i]!=str[length-1-i])
        {
            isPalindrome=0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}
