//Vowel,Consonst ,spicial, with type
#include<stdio.h>
void getCharterType();//declartion
void main()
{
	getCharterType();//call
}
void getCharterType()//defination
{	char ch;
	printf("Enter the ch: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	   {
	   	printf("ch is vowel ");
	   }
	    else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='z')
	   {
	   	printf("ch is consonant ");
	   }
	   
	   //else if(ch>=48 && ch<=58)
	   else if (ch>='0'&& ch<='9')
	   {
	   	printf("ch is digit ");
	   }
	 else
	 {
	  printf("ch is special symbol ");
	}  
}
