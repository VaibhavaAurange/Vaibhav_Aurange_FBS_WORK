//check Vowel, consonant, spicail symbol type 4
#include<stdio.h>
char ischeck(char);//declartion
void main()
{
	char ch;
	printf("Enter the ch: ");
	scanf("%c",&ch);
	int res=ischeck(ch);//call
	if(res==1)
    	printf("ch is vowel ");
	else if(res==2)
    	printf("ch is consonant ");
	else if(res==3)
		printf("ch is digit ");
	else 
	 printf("ch is special symbol ");
}
char ischeck(char ch)//defination
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	   	 return 1;
	   	 
	    else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='z')
	   	 return 2;
	   	 
	   else if (ch>='0'&& ch<='9')
	   	return 3;
	
	 else
	  return 4;
	  
}
