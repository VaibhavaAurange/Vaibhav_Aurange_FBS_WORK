//Vowel,Consonant, Specail symbol with function type 2
#include<stdio.h>

//  declaration
char checkChar(); 

void main()
{
    
    char result = checkChar(); //  call

    if (result == 'v')
        printf("Character is a vowel.");
    else if (result == 'c')
        printf("Character is a consonant.");
    else if (result == 'd')
        printf("Character is a digit.");
    else
        printf("Character is a special symbol.");
}

//  definition
char checkChar()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);


    if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' ||
        ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
    {
        return 'v'; 
    }
    
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 'c';  
    }
    
    else if (ch >= '0' && ch <= '9')
    {
        return 'd';  
    }
    else
    {
        return 's'; 
    }
}
