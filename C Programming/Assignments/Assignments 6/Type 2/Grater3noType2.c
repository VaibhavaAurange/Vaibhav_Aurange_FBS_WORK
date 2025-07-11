//find greatest of three numbers using nested if-else with function Type 2
#include<stdio.h>
int getGreater();//declaration
void main()
{
    int greatest = getGreater();  // call 
    printf("Greatest number is: %d",greatest);
}

int getGreater()//defination
{
	int a,b,c;
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