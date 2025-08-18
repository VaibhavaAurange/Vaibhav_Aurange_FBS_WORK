// Book Mangement system
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
typedef struct book
{
	int ID;
	char BookName[100];
	char AuthorName[100];
	char BookCategory[100];
	float Price;
	float rating;
}Books;

void addBook(Books*book,int*count);
void displayAllBooks(Books*book,int count);
void removeBook(Books*book,int*count);
void searchByID(Books*book,int*count);
void searchByName(Books*book,int*count);
void showAuthorBooks(Books*book,int*count);
void showCategoryBooks(Books*book,int*count);
void updateBook(Books*book,int*count);
void displayTop3Books(Books*book,int*count);

void main()
{
    int sizearr=10;
    Books* book=(Books*)malloc(sizearr * sizeof(Books));
    int count=8;
    book[0]=(Books){1, "C Programming", "Dennis Ritchie", "Programming", 299.99, 4.5};
    book[1]=(Books){2, "Shyamchi Aai", "Sane Guruji", "Biography", 150.00, 4.8};
    book[2]=(Books){3, "The Alchemist", "Paulo Coelho", "Fiction", 199.75, 4.7};
    book[3]=(Books){4, "Wings of Fire", "APJ Abdul Kalam", "Biography", 250.00, 4.8};
    book[4]=(Books){5, "Yayati", "V. S. Khandekar", "Mythology", 270.00, 4.6};
    book[5]=(Books){6, "The Psychology of Money", "Morgan Housel", "Finance", 450.00, 4.6};
    book[6]=(Books){7, "Mrityunjay", "Shivaji Sawant", "Historical", 320.00, 4.9};
    book[7]=(Books){8, "IKIGAI", "Francesc Miralles", "Self Help", 300.00, 4.4};

    int choice=1;
	while(choice)
	{
		printf("\n======================= BOOK MANAGEMENT SYSTEM ======================\n");
		printf("1.Add Book\n");
		printf("2.Display All Books\n");
		printf("3.Remove Book\n");
		printf("4.Search Book by ID\n");
		printf("5.Search Book by Name\n");
		printf("6.Show Books by Author\n");
		printf("7.Show Books by Category\n");
		printf("8.Update Book\n");
		printf("9.Display Top 3 Books (Price/Rating)\n");
		printf("10.Exit\n");
		printf("=====================================================================\n");
		printf("Enter your choice: ");
        scanf("%d",&choice);
        
        if(choice==1) 
        {
            if (count>=sizearr)
            {
                sizearr=sizearr*2;
                book=(Books*)realloc(book,sizearr* sizeof(Books));
                if (book==NULL)
                {
                    printf("Memory allocation failed. Exiting.\n");
                    exit(1);
                }
            }
            addBook(book,&count);
        }
		else if(choice==2) 
		displayAllBooks(book,count);
        else if(choice==3) 
        removeBook(book,&count);
        else if(choice==4) 
        searchByID(book,&count);
        else if(choice==5) 
        searchByName(book,&count);
        else if(choice==6) 
        showAuthorBooks(book,&count);
        else if (choice==7) 
        showCategoryBooks(book,&count);
        else if (choice==8)
		updateBook(book,&count);
        else if(choice==9)
		displayTop3Books(book,&count);
        else if (choice==10) 
		break;
        else printf("Invalid choice!\n");
    }
    free(book);
}

void addBook(Books*book,int*count) 
{
	int newID;
	int duplicate=0;
    printf("Enter Book ID: ");
    scanf("%d",&newID);

    for (int i=0;i<*count;i++) 
	{
        if (book[i].ID==newID) 
		{
            duplicate=1;
            break;
        }
    }
    if(duplicate) 
	{
        printf("Book with ID %d already exists, not add duplicate ID.\n",newID);
        return;
    }

    book[*count].ID=newID;
    printf("Enter Book Name: ");
    fflush(stdin);
    gets(book[*count].BookName);
    printf("Enter Author Name: ");
    fflush(stdin);
    gets(book[*count].AuthorName);
    printf("Enter Category: ");
    gets(book[*count].BookCategory);
    float price;
    printf("Enter Price: ");
    scanf("%f",&price);
    if (price<0) 
    {
        printf("Invalid price,Book not added.\n");
        return;
    }
    book[*count].Price=price;
    
    float rating;
    printf("Enter Rating: ");
    scanf("%f",&rating);
    if (rating<0||rating>5) 
    {
        printf("Invalid rating,Rating should be between 0.0 and 5.0. Book not added.\n");
        return;
    }
    book[*count].rating=rating;
    (*count)++;
    printf("Book added successfully!\n");
}

void displayAllBooks(Books*book,int count) 
{
    if(count==0) 
	{
        printf("No books in the Systems.\n");
        return;
    }
    printf("\n=================================================================================================\n");
    printf("| %-4s | %-25s | %-20s | %-15s | %-8s | %-6s |\n", 
           "ID", "Book Name", "Author", "Category", "Price", "Rating");
    printf("-------------------------------------------------------------------------------------------------\n");
    for (int i=0;i<count;i++) 
	{
        printf("| %-4d | %-25s | %-20s | %-15s | %-8.2f | %-6.1f |\n",
               book[i].ID,book[i].BookName,book[i].AuthorName,book[i].BookCategory,book[i].Price,book[i].rating);
    }
    printf("=================================================================================================\n");
}

void removeBook(Books*book,int*count) 
{
    int id;
	int found=0;
    printf("Enter Book ID to remove: ");
    scanf("%d",&id);
    for (int i=0;i<*count;i++) 
	{
        if (book[i].ID==id) 
	    {
            for (int j=i;j<*count-1;j++) 
			{
                book[j]=book[j+1];
            }
            (*count)--;
            found=1;
            printf("Book removed successfully!\n");
            break;
        }
    }
    if(!found)
        printf("Book ID not found.\n");
}

void searchByID(Books*book,int*count) 
{
    int id; 
	int found=0;
    printf("Enter Book ID to search: ");
    scanf("%d",&id);
    for (int i=0;i<*count;i++) 
	{
        if (book[i].ID==id) 
		{
            printf("Book Found:\n");
            printf("ID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
                   book[i].ID,book[i].BookName,book[i].AuthorName,book[i].BookCategory,book[i].Price,book[i].rating);
            found=1;
            break;
        }
    }
    if (!found)
        printf("Book ID not found.\n");
}

void searchByName(Books*book,int*count) 
{
    char name[100];
    int found=0;
    printf("Enter Book Name to search: ");
    fflush(stdin);
    gets(name);
    for (int i=0;i<*count;i++) 
	{
        if (strstr(book[i].BookName,name)!=NULL) 
		{
            printf("Book Found:\n");
            printf("ID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
                   book[i].ID,book[i].BookName,book[i].AuthorName,book[i].BookCategory,book[i].Price,book[i].rating);
            found=1;
        }
    }
    if (!found)
        printf("Book not found.\n");
}

void showAuthorBooks(Books*book,int*count) 
{
    char author[100];
    int found=0;
    printf("Enter Author Name: ");
    fflush(stdin);
    gets(author);
    for (int i=0;i<*count;i++) 
	{
        if(strstr(book[i].AuthorName,author)!=NULL) 
		{
            printf("ID: %d\nBookName: %s\nBookCategory: %s\nPrice: %.2f\nRating: %.1f\n",
                   book[i].ID,book[i].BookName,book[i].BookCategory,book[i].Price,book[i].rating);
            found=1;
        }
    }
    if (!found)
        printf("No books found by this author.\n");
}

void showCategoryBooks(Books*book,int*count) 
{
    char category[100];
    int found=0;
    printf("Enter Category: ");
    fflush(stdin);
    gets(category);
    for (int i=0;i<*count;i++) 
	{
        if (strcmp(book[i].BookCategory,category)==0) 
		{
            printf("ID: %d \nName: %s \nAuthor: %s \nPrice: %.2f \nRating: %.1f\n",
                book[i].ID,book[i].BookName,book[i].AuthorName,book[i].Price,book[i].rating);
            found=1;
        }
    }
    if (!found)
        printf("No books found in this category.\n");
}

void updateBook(Books*book,int*count) 
{
    int id;
	int found=0;
    printf("Enter Book ID to update: ");
    scanf("%d",&id);
    for (int i=0;i<*count;i++) 
	{
        if (book[i].ID==id) 
		{
            printf("Enter new price: ");
            scanf("%f", &book[i].Price);
            printf("Enter new rating: ");
            scanf("%f", &book[i].rating);
            printf("Book updated successfully.\n");
            found=1;
            break;
        }
    }
    if (!found)
        printf("Book ID not found.\n");
}

void displayTop3Books(Books*book,int*count) 
{
    Books* priceSorted=(Books*)malloc((*count)*sizeof(Books));
    Books* ratingSorted=(Books*)malloc((*count)*sizeof(Books));

    for (int i=0; i<*count;i++) {
        priceSorted[i]=book[i];
        ratingSorted[i]=book[i];
    }

    for (int i=0;i<*count-1;i++) {
        for (int j=i+1;j<*count;j++) {
            if (priceSorted[i].Price<priceSorted[j].Price) {
                Books temp=priceSorted[i];
                priceSorted[i]=priceSorted[j];
                priceSorted[j]=temp;
            }
        }
    }

    printf("\n======== Top 3 Books by Price ==========\n");
    printf("| %-25s | %-8s |\n","Book Name","Price");
    printf("----------------------------------------\n");
    for (int i=0;i<*count && i<3;i++) {
        printf("| %-25s | %-8.2f |\n",priceSorted[i].BookName, priceSorted[i].Price);
    }
    printf("========================================\n");

    for (int i=0; i<*count-1;i++) {
        for (int j=i+1;j<*count;j++) {
            if (ratingSorted[i].rating<ratingSorted[j].rating) {
                Books temp=ratingSorted[i];
                ratingSorted[i]=ratingSorted[j];
                ratingSorted[j]=temp;
            }
        }
    }

    printf("\n=======  Top 3 Books by Rating =======\n");
    printf("| %-25s | %-6s |\n","Book Name","Rating");
    printf("--------------------------------------\n");
    for (int i=0;i<*count && i<3;i++) {
        printf("| %-25s | %-6.1f |\n",ratingSorted[i].BookName,ratingSorted[i].rating);
    }
    printf("======================================\n");
    free(priceSorted);
    free(ratingSorted);
}











