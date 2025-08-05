//WAP to remove duplicate ch from String.
#include <stdio.h>
void main() 
{
    char str[100]; 
	char str1[100];
    int i,j,k=0; 
	int isDuplicate;
    printf("Enter a string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++) 
	{
        isDuplicate=0;
        for(j=0;j<k;j++) 
		{
            if(str[i]==str1[j]) 
		    {
                isDuplicate=1;
                break;
            }
        }
        if(!isDuplicate) 
		{
            str1[k]=str[i];
            k++;
        }
    }
    str1[k]='\0';
    printf("String after removing duplicates: %s\n",str1);
}
