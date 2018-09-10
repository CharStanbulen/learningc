#include <stdio.h>
#define BASIC

//argc代表传入参数的个数，argv的第一个参数表示程序文件名
//如果不传递任何参数，argc的默认值为1
int main(int argc, char *argv[])
{
#ifdef BASIC
    if (argc == 2)
    {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if(argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }
#endif

    return 0;
}
