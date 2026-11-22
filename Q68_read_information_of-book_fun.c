#include <stdio.h>
struct book
{
    char name[50];
    char author[50];
    float price;
};

void read();
int main()
{
    struct book b;

    read(b);

    return 0;
}
void read(){
    struct book b;
    printf("Enter book name: ");
    scanf(" %s", b.name);

    printf("Enter author name: ");
    scanf(" %s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\nBook Information:\n");
    printf("Book Name: %s\n", b.name);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}