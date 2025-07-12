//find greatest of three numbers using nested if-else with function Type 4
#include<stdio.h>
int getGreater(int, int, int);//declaration
void main()
{
	int a,b,c;
    int greatest = getGreater(a,b,c);  // call 
    printf("Greatest number is: %d",greatest);
}

int getGreater(int a, int b, int c)//defination
{
  
  printf("Enter the 3 no a,b,c: \n");
  scanf("%d%d%d",&a,&b,&c);
    if (a>b)
      {
      	if (a>c)
      	  return a;
        else
          return c;
	  }
	  
	else
	{
	  if (b>c)	
	    return b;
	  else
	    return c;
	}	
}