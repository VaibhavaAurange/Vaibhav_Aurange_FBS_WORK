//Write a program to find greatest of three numbers using nested if-else.
void main()
{ int a,b,c;
  printf("Enter the 3 no\n");
  scanf("%d%d%d",&a,&b,&c);
    if (a>b)
      {
      	if (a>c)
      	printf ("a is grater");
        else
        printf("c is grater");
	  }
	  
	else
	{
	  if (b>c)	
	  printf ("b is grater");
	  else
	  printf("c is grater");
	}	
	
}