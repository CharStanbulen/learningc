#include <stdio.h>
#include <stdarg.h>
//#define BASIC
#define PARAMLIST

#ifdef BASIC
// average函数第一个参数代表传入函数参数的总数
double average(int num, ...)
{
    va_list valist;
    double sum = 0.0;
    int i;

    /* 为num个参数初始化list */
    va_start(valist, num);

    /* 访问所有赋给valist的参数 */
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }

    /* 清理为valist保留的内存 */
    va_end(valist);

    return sum/num;
}
#endif

#ifdef PARAMLIST
//可变参数是按照list的形式传入函数
void debug_arg(unsigned int num, ...)
{
    unsigned int i = 0;
    unsigned int *addr = &num;
    for (i = 0; i <= num; i++)
    {
        //这里我有点不理解为何传入的其他参数为什么取值和实际不一样
        printf("i=%d, value=%d\r\n", i, *(addr + i));
    }
}
#endif

int main()
{
#ifdef BASIC
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
    printf("Average of 2, 3, 4, 5 = %f\n", average(3, 5, 10, 15));
#endif

#ifdef PARAMLIST
    unsigned a = 66;
    unsigned b = 77;
    unsigned c = 99;
    debug_arg(3, a, b, c);
#endif

    return 0;
}
