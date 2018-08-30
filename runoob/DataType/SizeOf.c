#include <stdio.h>
#include <limits.h>
#include <float.h>

// 使用sizeof()函数可以知道类型或对象在各平台所占的大小。
int main()
{
    printf("size of int is: %lu \n", sizeof(int));
    printf("max size of float is: %lu \n", sizeof(float));
    printf("float max value: %E\n", FLT_MIN);
    printf("float min value: %E\n", FLT_MAX);
    
    // 所谓精度就是指数值小数点后多少位是精确的
    printf("accuracy value: %d\n", FLT_DIG);

    // 强制类型转换
    //
    float f, x = 3.6, y = 5.2;
    int i = 4, a, b;
    a = x + y;
    b = (int)( x + y);
    f = 10 / i;
    printf("a=%d,b=%d,f=%f,x=%f\n", a, b, f, x);

    return 0;
}
