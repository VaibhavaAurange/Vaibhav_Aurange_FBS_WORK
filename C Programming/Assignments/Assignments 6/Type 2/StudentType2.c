//student or not with function type 2
#include<stdio.h>
float getStudent();//declaration
void main()
{
	
    float FinalPrice = getStudent(); // call
    printf("Final price to pay: %.2f\n", FinalPrice);
}

float getStudent()//defination
{
	float price, discount = 0, FinalPrice;
    char isStudent;

    printf("Enter the purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student(y/n): ");
    scanf(" %c", &isStudent);  

    if (isStudent == 'y') 
	{
        if (price > 500)
            discount = 0.20 * price;
        else
            discount = 0.10 * price;
    } 
	else 
	{
        if (price > 600)
            discount = 0.15 * price;
        else
            discount = 0.0;
    }

    FinalPrice = price - discount;

    
    printf("Discount: %.2f\n", discount);
    return FinalPrice;

}