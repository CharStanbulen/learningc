#include <stdio.h>
//#define BASIC

//#define OPERATOR
#ifdef OPERATOR
//这里的参数是字符串常量
#define message_for(a, b) \
	printf(#a " and " #b " We love you!\n");
#endif

//#define COMBINE
#ifdef COMBINE
#define tokenpaster(n) \
	printf("token" #n " = %d", token##n);
#endif

//#define HASDEFINE
#ifdef HASDEFINE
#if !defined(MESSAGE)
	#define MESSAGE "You wish!"
#endif
#endif

//#define PARAM
#ifdef PARAM
//参数化宏的参数必须用括号括起来
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#endif

#define SWAP
#ifdef SWAP
#define MAX(x,y) ((x > y) ? (x) : (y))
//注意这里结尾必须用;
#define SWAP1(x, y) {x = x + y, y = x - y, x = x - y;}
#define SWAP2(x, y) {x = x ^ y; y = x ^ y; x = x ^ y;}
#endif

int main()
{
#ifdef BASIC
	printf("File: %s\n", __FILE__);
	printf("Date: %s\n", __DATE__);
	printf("Time: %s\n", __TIME__);
	printf("Line: %d\n", __LINE__);
	printf("ANSI: %d\n", __STDC__);
#endif

#ifdef OPERATOR
	//注意传值
	message_for(wenliang, cart);
#endif

#ifdef COMBINE
	//注意传值
	int token34 = 40;
	tokenpaster(34);
	printf("\n");
#endif

#ifdef HASDEFINE
	printf("Here is the message: %s\n", MESSAGE);
#endif

#ifdef PARAM
	printf("Max between 20 and 10 is %d\n", MAX(10, 20));
#endif

#ifdef SWAP
	//使用define定义的函数对变量进行处理看上去像是在对指针进行操作
	//如果这里有描述不当之处请随时指出
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Max number is: %d\n", MAX(a, b));
	printf("before exchange: x = %d, y = %d\n", a, b);
	SWAP1(a, b);
	printf("after exchange: x = %d, y = %d\n", a, b);
	SWAP2(a, b);
	printf("after exchange again: x = %d, y = %d\n", a, b);
	return 0;
#endif

	return 0;
}
