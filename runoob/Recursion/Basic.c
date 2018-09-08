#include <stdio.h>
//#define BASIC
#define FIBONACI

#ifdef BASIC
double factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}
#endif

#ifdef FIBONACI
int fibonaci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i - 2);
}
#endif

int main()
{
#ifdef BASIC
    int i = 15;
    printf("Recursion of %d is: %f\n", i, factorial(i));
#endif

#ifdef FIBONACI
int i;
for(i = 0; i < 10; i++)
{
    printf("%d\t\n", fibonaci(i));
}
#endif

    return 0;
}
