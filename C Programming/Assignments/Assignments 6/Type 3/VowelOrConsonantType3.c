//vowel or Consonant with function type 3
#include<stdio.h>
void VowelOrConsonant(char);//declartion

void main()
{   
    char ch;
	printf("Enter the ch: ");
	scanf("%c",&ch);
	VowelOrConsonant(ch);//call
	
}
void VowelOrConsonant(char ch)//defintion
{

	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	    printf("is Vowel ");	
	}
	else
       printf ("is Consonant ");
		 
}