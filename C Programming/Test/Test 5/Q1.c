//1.WAP to calculte selling price of book based on cost price and discount.
//(using function and nested if-else)
#include <stdio.h>

float calculateSellingPrice(float costPrice, float discount);

int main() 
{
	float cost, discount, sellingPrice;

	printf("Enter cost price of the book: ");
	scanf("%f", &cost);
	printf("Enter discount percentage: ");
	scanf("%f", &discount);
	
	sellingPrice=calculateSellingPrice(cost,discount);

	printf("Selling Price=%.2f\n", sellingPrice);

	return 0;
}

float calculateSellingPrice(float costPrice, float discount) 
{
	float sellingPrice;

	if (costPrice>0) 
	{
		if (discount>=0 && discount<=100) 
		{
			sellingPrice=costPrice-(costPrice*discount/100);
		} else 
		{
			printf("Invalid discount,Must be between 0 and 100\n");
			sellingPrice=costPrice;
		}
	} 
	else 
	{
		printf("Invalid cost price,Must be greater than 0\n");
		sellingPrice=0;
	}
	return sellingPrice;
}
