#include <stdio.h>
#include <time.h>

#define TIME 10000000
int m, n = TIME;

int func1(void);

// 全局变量默认为static存储类
static int count = 10;

void fun()
{
    static int a = 1; a++;
    printf("%d\n", a);
}

int main()
{
    //while (count--) {
    //    func1();
    //}


    //一般来说存储类的调用速度如下
    //register > 普通变量
    //但是在mac上执行register变量调用远低于普通变量
    /*
    time_t start, stop;
    register int a, b = TIME;
    int x, y = TIME;

    time(&start);
    for (a = 0; a < b; a++)
    time(&stop);
    printf("register variable used time: %ld secs\n", stop - start);

    time(&start);
    for(x = 0; x < y; x++)
    time(&stop);
    printf("auto variable used time: %ld secs\n", stop - start);

    time(&start);
    for(m = 0; m < n; m++);
    time(&stop);
    printf("global variable used time: %ld secs\n", stop - start);
    */
    fun();
    fun();

    return 0;
}

int func1(void)
{
    // 函数内部使用static在函数每次被调用的时候
    // 直到程序生命周期结束为止，该变量不会被销毁
    /*
    static int thingy = 5;
    thingy++;
    printf(" thingy is %d, count is %d\n", thingy, count);
    */

    // auto局部变量每次调用function完毕后即被销毁
    // c程序默认存储类为auto
    auto int i = 9;
    printf("%d\n", i);
    getchar();
    return 0;
}
