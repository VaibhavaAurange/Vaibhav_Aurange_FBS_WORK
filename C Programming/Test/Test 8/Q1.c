#include <stdio.h>
#include <string.h>
void main() 
{
    char userid[20]; 
	char password[20];
    int captch=1234;
    int userInput;
    
    printf("Enter User ID: ");
    scanf("%s",userid);

    printf("Enter Password: ");
    scanf("%s", password);

    if(strcmp(userid,"Vaibhav")==0 && strcmp(password,"7887")==0) 
	{
        printf("Your captch is: %d\n",captch);
        printf("Enter the same captch: ");
        scanf("%d", &userInput);

        if(userInput==captch) 
		{
            printf("Login Successful!\n");
        } 
		else 
		{
            printf("Login Failed.\n");
        }
    } 
    else 
	{
        printf("Wrong User ID or Password\n");
    }
}
