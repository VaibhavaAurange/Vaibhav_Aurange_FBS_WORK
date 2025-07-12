//student or not discount price type 4
#include <stdio.h>

float calculateFinalPrice(float price, char isStudent);//declartion

void main()
{
    float price, final_price;
    char isStudent;

    printf("Enter the purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student (y/n): ");
    scanf(" %c", &isStudent);  

    final_price = calculateFinalPrice(price, isStudent); // call

    printf("Final price to pay: %.2f\n", final_price);
}


float calculateFinalPrice(float price, char isStudent)//defination
{
    float discount = 0;

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

    printf("Discount: %.2f\n", discount); 
    return price - discount;
}
