#include <stdio.h>
#include <string.h>
//typedef 是由编译器进行处理的
//define 是由预编译器进行处理的
//typedef 只能为类型定义符号名称，#define不仅可以为类型定义名称
//也能为数值定义名称
#define TRUE 1
#define FALSE 0

//type def用来定义一个数据类型
typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
}Book;

int main()
{
	Book book;
	
	strcpy(book.title, "c programme");
	strcpy(book.author, "runboo");
	strcpy(book.subject, "language");
	book.book_id = 12345;

	printf("book title: %s\n", book.title);
	printf("book author: %s\n", book.author);
	printf("book subject: %s\n", book.subject);
	printf("book ID: %d\n", book.book_id);

	printf("VALUE OF TRUE IS: %d\n", TRUE);
	printf("VALUE OF FALSE IF %d\n", FALSE);

	return 0;
}
