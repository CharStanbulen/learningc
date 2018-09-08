#include <stdio.h>
//#define BASIC
//#define INTRISE
#define MULTI

int main ()
{
#ifdef BASIC
    int sum = 17, count = 5;
    double mean;

    //强制转换的优先级较高
    mean = (double) sum / count;
    printf("Value of mean: %f\n", mean);
#endif

#ifdef INTRISE
    int i = 17;
    char c = 'c';
    int sum;

    //整数提升将小于int或unsigned int类型转换为int或者unsigned int
    sum = i + c;
    printf("Value of sum : %d\n", sum);
#endif

#ifdef MULTI
    int i = 17;
    char c = 'c';
    float sum;

    //编译器会先将字符做整形提升，之后将i和c转换为float类型
    //参加运算两边的数据类型不同，则较低类型转换为较高类型再参加运算
    //如下为数据类型由低到高的顺序
    //char,short->int->unsigned->long->duble->float
    sum = i + c;
    printf("Value of sum: %f\n", sum);
#endif

    return 0;
}
