//Vowel,Consonant, Specail symbol with function type 3 with parmter withou return type
#include<stdio.h>

//  declaration
void checkChar(char); 

void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    checkChar(ch); //  call
}

//  definition
void  checkChar(char ch)
{


    if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' ||
        ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
    {
        printf("Character is a Vowel.");
    }
    
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is a consonant.");
    }
    
    else if (ch >= '0' && ch <= '9')
    {
        printf("Character is a digit.");
    }
    else
    {
        
        printf("Character is a special symbol.");
    }
}
