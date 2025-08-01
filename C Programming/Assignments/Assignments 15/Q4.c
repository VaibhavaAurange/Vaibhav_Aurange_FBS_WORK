//4. Point of Sale System: Build a simple point of sale system using structures to
//represent products with attributes like name, price, and quantity. Allow users
//to add items to a cart and calculate the total cost.
#include<stdio.h>
typedef struct
{
	char name[20];
	int price;
	int quantity;
}product;
void main()
{
	product cart[5];
	int n;
	int total=0;
	
	printf("how many prodcut:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nEnter product %d name: ",i+1);
		fflush(stdin);
		gets(cart[i].name);
		printf("Enter the price:");
		scanf("%d",&cart[i].price);
		printf("Enter the Quantity of produt:");
		scanf("%d",&cart[i].quantity);
	}
	printf("Bill=\n");
	for(int i=0;i<n;i++)
	{
		int ProdutTotal=cart[i].price*cart[i].quantity;
		printf("%s:%dx%d=%d\n",cart[i].name,cart[i].price,cart[i].quantity,ProdutTotal);
		total=total+ProdutTotal;
	}
	printf("\nTotal Amount=%d\n",total);
}