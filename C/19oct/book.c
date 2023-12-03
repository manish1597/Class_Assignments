#include <stdio.h>

struct book
{
    char title[20];
    char author[20];
    float edition;
    int price;
};

int main()
{
    struct book b[3];

    printf("Enter the details of 3 books:\n");
 
    for (int i = 0; i < 3; i++)
    {
        printf("Book %d:\n", i + 1);

        printf("Enter the title: ");
        scanf("%s", b[i].title);

        printf("Enter the author: ");
        scanf("%s", b[i].author);

        printf("Enter the edition: ");
        scanf("%f", &b[i].edition);

        printf("Enter the price: ");
        scanf("%d", &b[i].price);
    }

    printf("Entered book details are:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author); 
        printf("Edition: %.2f\n", b[i].edition);
        printf("Price: %d\n", b[i].price);
    }

    return 0;
}
