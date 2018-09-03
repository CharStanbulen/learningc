#include <stdio.h>

//c语言单引号和双引号的区别
//单引号代表一个字符，是ASCII表中的序列值
//双引号中的字符串会被存储到一个数组中，这个字符串指向这个数组起始字符的指针

//use 'define' keyword to define constant
/*
// define是宏定义，不会为宏名分配内存。
// 编译的时候进行字符替换
// define编译的时候会分配多次内存
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
*/

//#define DEBUG
//这里的预编译DEBUG宏可以用来进行c语言的调试调试
#ifdef DEBUG
//下面这句会导致define的边缘效应
//在计算area的时候会变成 10 + 10 * WIDTH
#define LENGTH 10 + 10
#else
//不会引起define的边缘效应 (10 + 10) * WIDTH
#define LENGTH (10 + 10)
#endif
#define NEWLINE '\n'
#define WIDTH 5

int main()
{
    int area;
    // use 'const' keyword to define constant
    // const 也不会为常量分配内存，改变一个变量的存储类
    // const 可以用来节约内存，分配过一次之后再次调用将不再分配内存
    // 把该变量所占的内存变为只读。
    // 在编译运行时起作用
    /*
    const int LENGTH = 10;
    const int WIDTH =5;
    const char NEWLINE = '\n';
    */

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

    // 格式化输出
    // \101 二进制
    // \x41 十六进制
    // %c 代表输入一个字符
    // %s 代表输入字符串
    printf("%c,%c,%c,%c", 0101, '\101', '\x41', 'A');

    return 0;
}
