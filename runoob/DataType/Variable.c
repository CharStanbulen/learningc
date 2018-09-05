#include <stdio.h>
// 1 byte = 8bit
// c语言中0和1按照1个bit进行存储
// extern关键字代表声明，没有进行定义

// 变量声明
extern int a, b;
extern int c;
extern float f;

// extern
// extern声明的变量赋值代表定义，如果之后再对该变量定义则会引起报错。
extern int a;
int a;
//extern int a = 0;
int a = 0;

int main()
{
    // 变量定义
    int a, b, m, n, x;
    int c;
    float f;

    // 初始化
    // a是左值，指向内存
    // 10是存在内存中的数值
    // 当需要保存数据时，需要lvalues
    // 当需要读取数据时，需要rvalues
    a = 10;
    b = 20;
    // 根据上下文情，lvalues在需要的时候回自动转换为rvalues。
    // 如下n为lvalue
    m = n + 2;

    c = a + b;
    printf("value of c : %d\n", c);

    f = 70.0 / 3.0;
    printf("value of f : %f\n", f);
    
    // 内存寻址由大到小，先分配内存的地址大。
    printf("adrress of a is %p\naddress of b is %p\n", &a, &b);

    // 在c语言中没有初始化的变量是一个未知的值，这会和不同的操作系统有关系。
    // c语言定义的变量必须初始化。
    printf("Value of m is: %d\n", m);

    printf("Hello\tWorld\n\n");

    return 0;
}
