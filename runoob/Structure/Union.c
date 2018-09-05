#include <stdio.h>
#include <string.h>
//#define BASIC
#define USAGE

#ifdef BASIC
//共用体大小等于占用空间最大的成员
union Data
{
    int i;
    float f;
    char str[20];
};
#endif

#ifdef USAGE
union Data
{
    int i;
    float f;
    char str[20];
};
#endif

int main()
{
#ifdef BASIC
    union Data data;
    printf("Memory size occupied by data : %lu\n", sizeof(data));
#endif

#ifdef USAGE
    union Data data;
    // 共用体正确赋值取值的方法
    // union用于接收包发送的数据相当节省内存
    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f: %f\n", data.f);

    strcpy(data.str, "C porgramming");
    printf("data.str : %s\n", data.str);
#endif

    return 0;
}

