//vowel or Consonant with function type 2
#include<stdio.h>
char VowelOrConsonant();//declartion
char ch;
void main()
{
	if(VowelOrConsonant()==1)//call
	{
	  printf("is Vowel ");	
	}
	else
	printf ("is Consonant ");
}
char VowelOrConsonant()//defintion
{

	printf("Enter the ch: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		return 1;
	}
	else
       return 0;
		 
}