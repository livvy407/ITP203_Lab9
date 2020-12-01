#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct library
{
	char title[60];
	char author[40];
	int price;
	char issue[10];
} book[100];

int main()
{
	int i, n, option;
	int count = 0;
	char Author[40];
	char Title[40];

	do
	{
		printf("\n 1. Add Book Information.\n");
		printf("2. Display Book Information.\n");
		printf("3.List All Books Of A Specified author.\n");
		printf("4. List The Title Of Specified Book.\n");
		printf("5. List The Count Of Books In The Library.\n");
		printf("6. Exit\n");

		printf("\n Enter any option: ");
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				printf("\nNumber of books to enter: ");
				scanf("%d", &n);

				for(i = 1; i <= n; i++)
				{
					printf("\nEnter the title of book:");
					scanf("%s", book[i].title);

					printf("Enter the author of book:");
					scanf("%s", book[i].author);

					printf("Enter the price of book:");
					scanf("%d", &book[i].price);

					printf("Is the Book Issued (Yes or No):");
					scanf("%s", book[i].issue);
				}
				break;

			case 2:
				printf("\n Book Information.\n");

				for(i = 1; i <= n; i++ )
				{
					printf("Book[%d], = {%s, %s, %d, %s} \n", i, book[i].title, book[i].author, book[i].price, book[i].issue);
				}	
				break;

			case 3:
				printf("Enter the name of the author: ");
				scanf("%s", Author);

				for(i = 1; i <= n; i++)
				{
					if(strcmp(book[i].author, Author) == 0)
					{
						printf("List of book of the Author %s are: ", Author);
						printf("%s", book[i].title);
						printf("\n");
					}
				}	
				break;

			case 4:
				printf("Enter the title of the Book: ");
				scanf("%s", Title);

				for(i = 1; i <= n; i++)
				{
					if(strcmp( book[i].title, Title))
					{
						printf("The detail of the mentioned book %s: ",Title);
						printf("book[%d] = {%s,%s,%d,%s}", i, book[i].title, book[i].author, book[i].price, book[i].issue);
						printf("\n");
					}
				}
				break;	

			case 5:
				for(i = 1; i <= n; i++)
				{
					count++;
				}	
				printf("\n Total number of books in the library: %d", count);
				printf("\n");
				break;

			case 6:
			exit(0);
		}
	}
	while(count != 6);
	return 0;
}