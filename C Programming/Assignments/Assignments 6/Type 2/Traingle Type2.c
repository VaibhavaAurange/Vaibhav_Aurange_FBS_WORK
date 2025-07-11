//Accept three sides of a triangle from the user and determine whether the triangle isequilateral, isosceles, or scalene.with function type 2
#include<stdio.h>
float getTriangle();//declaration
void main()
{
	 float res=getTriangle();//call
	 if(res==1)
	    printf("It's an Equilateral Triangle\n");  
	 else if(res==2)
        printf("It's an Isosceles Triangle\n");  
	 else 
	    printf("It's a Scalene Triangle\n");  
}

float  getTriangle()//defination
{
	 float a, b, c;  
  
    printf("Enter values for a, b ,c\n");  
    scanf("%f%f%f", &a, &b, &c);  
  
        if(a == b && b == c)  
        {  
            return 1;
        }  
        else if(a == b || a == c || b == c)  
           return 2;
        else    
           return 3;
}