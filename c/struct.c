#include <stdio.h>
#include <string.h>
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"title", "zhou", "ccc", 123456};

struct
{
    /* data */
    int a;
    char b;
    double c;

} s1;

struct simple
{
    int a;
    char b;
    double c;
};
struct simple t1, t2[2], *t3;

typedef struct
{
    int a;
    char b;
    double c;
} Simple;
Simple u1, u2[32], *u3;

void printBook(struct Books *book)
{
    printf("%s", book->title);
}

struct packed_struct
{
    unsigned int f1 : 1;
    unsigned int f2 : 1;
    unsigned int f3 : 1;
    unsigned int f4 : 1;
    unsigned int type : 4;
    unsigned int my_int : 9;
} pack;

// struct bs {
//     unsigned a:4;
//     unsigned  :4;
//     unsigned b:4;
//     unsigned c:4;
// };
union
{
    unsigned int age1 : 3;
    unsigned int age2 : 3;
    unsigned int age3 : 3;
} Age;

int main()
{
    struct Books book1;

    // strcpy(book1.title,"hello world");

    // printf("%s\n",book1.title);
    // printBook(&book1);

    // printf("%s,%s,%s,%d",book.title,book.author,book.subject,book.book_id);

    // struct Books *bookp;

    // bookp = &book1;
    // printf("%s",bookp->title);

    struct bs
    {
        unsigned a : 1;
        unsigned b : 3;
        unsigned c : 4;
    } bit, *pbit;
    void printBs(struct bs * bs)
    {
        printf("%d,%d,%d", bs->a, bs->b, bs->c);
        return;
    }
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printBs(&bit);
    puts("\n");
    pbit = &bit;
    pbit->a = 0;
    pbit->b &= 3;
    pbit->c |= 1;
    printBs(pbit);
    // printf("%d",sizeof(bit));
    // printf("%d,%d,%d\n",bit.a,bit.b,bit.c);
    printf("\n");
    Age.age1 = 4;
    printf("4:%d 7:%d 8:%d \n", Age.age1,Age.age2,Age.age3);
    Age.age2 = 7;
    printf("4:%d 7:%d 8:%d \n", Age.age1,Age.age2,Age.age3);
    Age.age3 = 8;
    printf("4:%d 7:%d 8:%d \n", Age.age1,Age.age2,Age.age3);

    return 0;
}
