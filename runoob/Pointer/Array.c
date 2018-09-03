#include <stdio.h>
//#define BASIC
#define ARR_STRING

int main()
{
#ifdef BASIC
    const int MAX = 3;
    int var[] = {10, 100, 200};
    // *ptr为指针数组，用来存储指针
    int i, *ptr[MAX];

    for (i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i];
    }
    for (i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
#endif

#ifdef ARR_STRING
    const int MAX = 4;
    // 指向字符串列表的指针
    const char *names[] = {
        "Wenliang",
        "Char",
        "Cart",
        "xu",
    };
    int i = 0;

    for (i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
#endif

    return 0;
}
