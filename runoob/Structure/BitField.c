#include <stdio.h>
#include <string.h>
//#define BASIC
#define RANGE

#ifdef BASIC
struct
{
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

// 位域宽度的单位为bit
// 如下结构体占用的内存大小为4Byte，4Byte * 8bit = 32bit
// 如果为该结构体定义32个宽度为1bit的成员变量，该结构体大小依然为4Byte
// 如果为该结构体定义33个宽度为1bit的成员变量，该结构体大小则为8Byte
// 这里的bit表示的是二进制位数

struct
{
    unsigned int widthValidated: 1;
    unsigned int heightValidated: 1;
} status2;
#endif

int main()
{
#ifdef BASIC
    printf("Memory size occupied by status1 : %lu\n", sizeof(status1));
    printf("Memory size occupied by status2 : %lu\n", sizeof(status2));
#endif

#ifdef RANGE
    struct {
        unsigned int age : 3;
    } Age;

    Age.age = 4;
    printf("Sizeof(Age): %lu\n", sizeof(Age));
    printf("Age.age: %d\n", Age.age);

    Age.age = 7;
    printf("Age.age: %d\n", Age.age);

    //如下为结构体成员变量赋值为报错
    //8转换为二进制为1000超过位域规定的宽度
    //超出位域宽度是存不进结构体变量的
    //结构体占用内存空间的算法，重要
    Age.age = 8;
    printf("Age.age: %d\n", Age.age);
#endif

    return 0;
}
