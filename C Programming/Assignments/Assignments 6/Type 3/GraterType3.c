//find greatest of three numbers using nested if-else with function Type 3
#include<stdio.h>
void getGrater(int, int, int);//declaration
void main()
{
  int a,b,c;
  printf("Enter the 3 no a,b,c: \n");
  scanf("%d%d%d",&a,&b,&c);
  getGrater(a,b,c);//call
}

void getGrater(int a, int b, int c)//defination
{
  
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