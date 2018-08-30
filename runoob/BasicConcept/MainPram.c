#include <stdio.h>

// argc为参数的个数，argv[0]代表可执行程序的名称
// argv其余下标的值代表对应命令行参数的值。
int main (int argc, char *argv[])
{
    printf("availabel programme %s, param number is [%d], output is: [%s]\n", argv[0], argc, argv[1]);
    return 0;
}
