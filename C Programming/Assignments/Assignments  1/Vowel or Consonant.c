void main ()
{
	char ch;
	printf("Enter the ch ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("%c is Vowel ",ch);
	}
	else
	{
		printf("%c is Consonant ",ch);
	}
}