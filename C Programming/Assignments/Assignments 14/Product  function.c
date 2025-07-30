//10. Product (id, name, quantity, price) with function
#include <stdio.h>
struct Product 
{
    int id;
    char name[30];
    int quantity;
    int price;
};
struct Product storeProduct();
void displayProduct(struct Product);
void main()
{
	struct Product P1,P2;
	P1=storeProduct();
	P2=storeProduct();
	
	displayProduct(P1);
	displayProduct(P2);
}
struct Product storeProduct()
{
	struct Product temp;
    printf("Enter product details:");
    printf("Enter ID: ");
    scanf("%d",&temp.id);
    printf("Enter Name: ");
    scanf("%s",&temp.name);  
    printf("Enter Quantity: ");
    scanf("%d", &temp.quantity);
    printf("Enter Price: ");
    scanf("%d",&temp.price);
    return temp;
}
void displayProduct(struct Product temp)
{
	printf("Product=\n");
    printf("ID: %d\n",temp.id);
    printf("Name: %s\n",temp.name);
    printf("Quantity: %d\n",temp.quantity);
    printf("Price: %d\n",temp.price);
}