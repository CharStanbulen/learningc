#include <stdio.h>
//#define BASIC
//#define PLACEHOLDER
//#define RECURSION
#define PARAM_POINTER
#define PARAM_LEAD

#ifdef BASIC
int max(int num1, int num2);
#endif

#ifdef RECURSION
int sum (int n)
{
	if(n == 1) {
		return 1;
	}
	return n + sum(n - 1);
}
#endif

#ifdef PARAM_POINTER
void swap(int *x, int *y)
{
//通过对换两个变量地址的值实现交换值
//指针传递
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
#endif

int main ()
{

#ifdef PARAM_POINTER
	int a = 5;
	int b = 10;
	swap(&a, &b);
	printf("The result is a = %d, b = %d\n", a, b);
	return 0;
#endif

#ifdef BASIC
	int a = 100;
	int b = 200;
	int ret;

	ret = max(a, b);

	printf("Max value is : %d\n", ret);
#endif

#ifdef PLACEHOLDER
	int a,b,c;
	char d[20];
	char s;
	float f;

	printf("Please input three number, and use ',' to seprate:");
	scanf("%d,%d,%d", &a, &b, &c);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	printf("Please input a string:");
	scanf("%s", &d);
	printf("%s\n", d);

	printf("Please input a float number:");
	scanf("%f", &f);
	printf("%f\n", f);

	//scanf会逐个读取缓冲区中的字符
	//getchar会逐个读取缓冲区中的字符，可以用此函数消除缓冲区中存在的'\n'
	getchar();
	printf("Please input a char:");
	scanf("%c", &s);
	printf("%c\n", s);

	printf("Please input a number:");
	scanf("%d", &a);
	printf("%d\n", a);
	
	getchar();
	printf("Please input another char:");
	scanf("%c", &s);
	printf("%c\n", s);
#endif

#ifdef RECURSION
	int a = sum(4);
	printf("%d\n", a);
#endif

	return 0;
}

#ifdef BASIC
int max(int num1, int num2);
int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}
#endif
