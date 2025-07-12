// check type of Triangle Type 4
#include<stdio.h>
int getTringle(int, int, int);//declartion
void main()
{
	float a, b, c;  
    printf("Enter values for a, b ,c\n");  
    scanf("%f%f%f", &a, &b, &c);  
	int res=getTringle(a,b,c);//call
	if(res==1)
	printf("It's an Equilateral Triangle\n");  
	else if(res==2)
	 printf("It's an Isosceles Triangle\n");  
	else 
	 printf("It's a Scalene Triangle\n"); 
}

int getTringle(int a, int b, int c)//defination
{
        if(a == b && b == c)  
          return 1; 
          
        else if(a == b || a == c || b == c)   
          return 2;  
     
        else   
            return 3;  
}