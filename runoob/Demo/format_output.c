#include <stdio.h>

int main(){
    char str[100] = "Hello World\n";
    int number;
    // 这里需要注意单个字符需要用单引号引起来
    // 字符串则需要用双引号引起来
    char single_str = 'w';
    //注意float的精度为小数点后六位
    float float_num = 3.679;
    double double_num = 12.987987;

    printf("Hello World\n");
    printf("%s", str);
    printf("The single char is: %c\n", single_str);
    printf("The float number is: %f.\n", float_num);
    // 双精度的可以用%e来格式化输出
    printf("The double number is: %e\n", double_num);

    printf("Please input a number:");
    scanf("%d", &number);
    printf("Yout input number is %d\n", number);

    return 0;
}
