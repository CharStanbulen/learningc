#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//#define BASIC
//#define PARAM_ARRAY
//#define PARAM_RETURN_LOCAL
//#define POINTER_TO_FUNC
#define PARAM_FUNC

#ifdef BASIC
void getSeconds(unsigned long *par);
void getSeconds(unsigned long *par)
{
    *par = time(NULL);
    return;
}
#endif

#ifdef PARAM_ARRAY
double getAverage(int *arr, int size)
{
    int i, sum;
    double avg;

    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    printf("%d", sum);
    avg = (double)sum / size;


    return avg;
}
#endif

#ifdef PARAM_RETURN_LOCAL
    //通常上函数是不能返回局部变量的内存地址
    //函数可以返回static定义的局部变量的内存地址
int * getRandom()
{
    static int r[10];
    int i;

    srand((unsigned)time(NULL));
    for (i = 0; i < 10; ++i)
    {
        r[i] = rand();
        printf("%d\n", r[i]);
    }
    return r;
}
#endif

#ifdef POINTER_TO_FUNC
int max(int x, int y)
{
    return x > y ? x : y;
}
#endif
#ifdef PARAM_FUNC
// size_t是一种数据类型，容量范围大于int和unsigned, sizeof返回的数据类型就是size_t。
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

int getNextRandomValue(void)
{
    return rand();
}
#endif
int main ()
{
#ifdef PARAM_FUNC
    int myarray[10];
    populate_array(myarray, 10, getNextRandomValue);
    for (int i; i < 10; i++)
    {
        printf("%d\n", myarray[i]);
    }
    printf("\n");
#endif
#ifdef POINTER_TO_FUNC
    int (*p)(int, int) = & max;
    int a,b,c,d;

    printf("please input three numbers:");
    scanf("%d %d %d", &a, &b, &c);

    d = p(p(a, b), c);

    printf("The max number is: %d\n", d);
#endif

#ifdef PARAM_RETURN_LOCAL
    int *p;
    int i;

    p = getRandom();
    for (i = 0; i < 10; i++)
    {
        printf("*(p + [%d]) : %d\n", i, *(p + i));
    }
#endif

#ifdef BASIC
    unsigned long sec;

    getSeconds (&sec);

    printf("Number of seconds: %ld\n", sec);
#endif

#ifdef PARAM_ARRAY
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    avg = getAverage(balance, 5);

    printf("Average value is: %f\n", avg);
#endif

    return 0;
}

