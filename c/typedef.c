#include<stdio.h>
#include<string.h>
#define TRUE "zhoubin"
#define FALSE 0
typedef unsigned char BYTE;
BYTE b1,b2;


typedef struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;
int main(){
    b1='c';
    printf("%c \n",b1);
    Book book;
    strcpy(book.title,"c program");
    strcpy(book.author,"author");
    strcpy(book.subject,"subject");
    book.book_id=123;
    printf("%s,%s,%s,%d\n",book.title,book.author,book.subject,book.book_id);

    printf("%s\n",TRUE);
return 0;
}
