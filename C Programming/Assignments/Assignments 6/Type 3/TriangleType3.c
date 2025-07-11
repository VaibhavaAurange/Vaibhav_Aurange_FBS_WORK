//Accept three sides of a triangle from the user and determine whether the triangle isequilateral, isosceles, or scalene.with function type 3
#include<stdio.h>
void getTriangle(float,float,float);//declaration
void main()
{  
    float a, b, c;  
    printf("Enter values for a, b ,c\n");  
    scanf("%f%f%f", &a, &b, &c);  
  
	 getTriangle(a,b,c);//call
}

void getTriangle(float a,float b,float c)//defination
{ 
  
        if(a == b && b == c)  
        {  
            printf("It's an Equilateral Triangle\n");  
        }  
        else if(a == b || a == c || b == c)  
        {  
            printf("It's an Isosceles Triangle\n");  
        }  
        else  
        {  
            printf("It's a Scalene Triangle\n");  
        }  
}