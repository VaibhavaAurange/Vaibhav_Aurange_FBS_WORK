//1. Create a structure Book with data members as bname, id, author, price. Accept the
//values of all these members from user and display them.
#include<stdio.h>
struct Book
{
	int id;
	char bookname[20];
	char author[20];
	int price;	
};
void main()
{
	struct Book B1;
	printf("Enter book id: ");
	scanf("%d",&B1.id);
	printf("Enter the bookname: ");
	fflush(stdin);
	gets(B1.bookname);
	printf("Enter the author name: ");
	fflush(stdin);
	gets(B1.author);
	printf("Enter the price of book: ");
	scanf("%d",&B1.price);
	
	printf("Book information=\n");
	printf("Book id:%d\n",B1.id);
	printf("Book name:%s\n",B1.bookname);
	printf("Book author:%s\n",B1.author);
	printf("Book price:%d\n",B1.price);
	
}