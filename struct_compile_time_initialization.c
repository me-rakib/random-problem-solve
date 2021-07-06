#include<stdio.h>
#include<string.h>
struct library
{
    int page;
    float price;
    char title[20];
    char author[20];
};
int main()
{
    struct library book1;
    book1.page = 100;
    book1.price = 10.20;
    //book1.title = "ABC"; // this is not acceptable, think about array
    strcpy(book1.title, "ABC");
    strcpy(book1.author, "Rakib");
    printf("%s %s %d %f", book1.title, book1.author, book1.page, book1.price);
    return 0;
}
