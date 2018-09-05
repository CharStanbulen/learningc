#include <stdio.h>
#include <string.h>

//#define BASIC
//#define ASPARAM
//#define ASPOINTER
//#define STRUCT_SIZE
#define STRUCT_INIT

#ifdef STRUCT_SIZE
//空间按照成员中最大的数据类型单位进行分配
//不能跨单位，不然不足的空间将分配到下一个分配单位中
//1 + 3(空闲) + 4 + 1 + 3(空闲) = 12
typedef struct
{
    unsigned char a;
    unsigned int b;
    unsigned char c;
} debug_size1_t;
// 1 + 1 + 3(空闲) + 4 = 8
typedef struct
{
    unsigned char a;
    unsigned char b;
    unsigned int c;
} debug_size2_t;
#endif

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

#ifdef ASPARAM
void printBook(struct Books book) {
    printf("Book title : %s \n", book.title);
    printf("Book author : %s \n", book.author);
    printf("Book subject : %s \n", book.subject);
    printf("Book book_id : %d \n", book.book_id);
}
#endif

#ifdef ASPOINTER
void printBook(struct Books *book) {
    printf("Book title : %s \n", book->title);
    printf("Book author : %s \n", book->author);
    printf("Book subject : %s \n", book->subject);
    printf("Book book_id : %d \n", book->book_id);
}
#endif

int main()
{
    //定义并为结构体成员赋值
    struct Books Book1;

    strcpy(Book1.title, "Telecom Billing");
    strcpy(Book1.author, "Wenliang Xu");
    strcpy(Book1.subject, "C programming");
    Book1.book_id = 12345678;
#ifdef BASIC
    printf("Book 1 title : %s \n", Book1.title);
    printf("Book 1 author : %s \n", Book1.author);
    printf("Book 1 subject : %s \n", Book1.subject);
    printf("Book 1 book_id : %d \n", Book1.book_id);
#endif

#ifdef ASPARAM
    printBook(Book1);
#endif

#ifdef ASPOINTER
    printBook(&Book1);
#endif

#ifdef STRUCT_SIZE
    printf("debug_size1_t size=%lu, debug_size2_t size=%lu\r\n", sizeof(debug_size1_t), sizeof(debug_size2_t));
#endif
    
#ifdef STRUCT_INIT
    // 定义结构体并初始化
    struct Student{
        char name[50];
        int gender;
        int age;
    } student2 = {"张三", 0, 30};
    struct Student student1;
    printf("name:\n");
    scanf("%s", student1.name);
    printf("gender:\n");
    scanf("%d", &student1.gender);
    printf("age:\n");
    scanf("%d", &student1.age);
    printf("student1 >> name = %s, gender = %d, age = %d\n", student1.name, student1.gender, student1.age);
    printf("student2 >> name = %s, gender = %d, age = %d\n", student2.name, student2.gender, student2.age);
#endif

    return 0;
}
