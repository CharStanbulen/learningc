#include <stdio.h>
//#define BASIC
//#define POINTER_VALUE
//#define POINTER_NULL
//#define POINTER_FUNCTION
#define POINTER_TOPOINTR

#ifdef POINTER_FUNCTION
void func1(int *a, int **b);
void func1(int *a, int **b)
{
    // 会对传进函数的a指针指向的变量进行操作
    (*a)++;
    (*b)++;
}
#endif

int main ()
{
#ifdef POINTER_FUNCTION
    int a[2] = {10, 20};
    int *b = &a[0];
    int *c = a + 1;
    // **d代表指向指针的指针，会从指针指向的变量中取值
    int **d = &c;

    func1(b, d);
    printf("a[0] = %d a[1] = %d\n", a[0], a[1]);
#endif

#ifdef BASIC
    int var1;
    char var2[10];
    // 都是一个代表内存地址的十六进制数
    // 不同指针指向的变量的数据类型不同
    int *ip;
    double *dp;
    float *fp;
    char *ch;

    //使用&运算符访问变量内存地址
    printf("variable address of var1: %p\n", &var1);
    printf("variable address of var2: %p\n", &var2);
#endif

#ifdef POINTER_VALUE
    int var = 20;
    int *ip;

    ip = &var;

    printf("Address of var variable: %p\n", &var);
    printf("Address stored in ip variable: %p\n", ip);
    // 给指针加上*用以访问指针指向的变量的值
    printf("Value of *ip variable: %d\n", *ip);
#endif

#ifdef POINTER_NULL
    int *ptr = NULL;
    if (ptr) {
        printf("ptr Address is %p\n", ptr);    
    
    } else {
        printf("ptr Address is empty\n");    
    }
#endif

#ifdef POINTER_TOPOINTR
    //指向指针的指针指向第一个指针指向的值的地址，并可以直接访问到那个值
    int var;
    int *ptr;
    int **pptr;

    var = 3000;
    ptr = &var;

    pptr = &ptr;

    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **ptr = %d\n", **pptr);
#endif

    return 0;
}

