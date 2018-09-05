#include <stdio.h>
//#define BASIC
#define COMPARE

int main()
{
#ifdef BASIC
    const int MAX = 3;
    int var[] = {10, 100, 200};
    int i, *ptr;

    ptr = &var[MAX-1];
    for (i = 3; i > 0; i--)
    {
        printf("memory address is: var[%d] = %p\n", i - 1, ptr);
        printf("memory value is: var[%d] = %d\n", i - 1, *ptr);

        ptr--;
    }
#endif

#ifdef COMPARE
    // 通过比较指针大小来遍历数组
    // 数组中由左向右的成员指针地址按数据类型大小递增
    const int MAX = 3;
    int var[] = {10, 100, 200};
    int i, *ptr;
    // 小hi
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1])
    {
        printf("Address of var[%d] = %p\n", i, ptr);
        printf("value of var[%d] = %d\n", i, *ptr);

        ptr++;
        i++;
    }
#endif

    return 0;
}
