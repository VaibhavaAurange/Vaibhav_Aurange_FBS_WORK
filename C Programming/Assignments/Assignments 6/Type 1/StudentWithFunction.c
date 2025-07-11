//student or not with function
#include<stdio.h>
void getStudent();//declaration
void main()
{
	 getStudent();//call
}

void getStudent()//defination
{
	float price, discount = 0, final_price;
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

    final_price = price - discount;

    
    printf("Discount: %.2f\n", discount);
    printf("Final price to pay: %.2f\n", final_price);

}