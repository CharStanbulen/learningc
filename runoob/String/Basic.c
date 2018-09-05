#include <stdio.h>
#include <string.h>
//#define BASIC
#define OPERATOR

int main()
{
#ifdef BASIC
    //字符串由每个字符和终止符'\0'组成
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting);
#endif

#ifdef OPERATOR
    // 字符串数组默认结尾用'\0'
    // 如果字符不以'\0'结尾，输出会出现乱码
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;

    // some fullname for fucntion relation string operation
    // strcmp: string compare
    // strcat: string catenate
    // strcpy: string copy
    // strlen: string length
    // strlwr: string lowercase
    // strupr: string upercase
    //copy str1 to str3
    strcpy(str3, str1);
    printf("strcpy(str3, str1) : %s\n", str3);
    //connect str1 and str2
    strcat(str1, str2);
    printf("strcat(str1, str2) : %s\n", str1);
    //get str1 length
    len = strlen(str1);
    printf("strlen(str1) : %d\n", len);
#endif

    return 0;
}
