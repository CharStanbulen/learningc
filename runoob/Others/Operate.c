#include <stdio.h>
int num;
int func(int num)
// 数学规律
// 2的幂数
// 2 & 1 -> 0000 0010 & 0000 0001 == 0
// 4 & 3 -> 0000 0100 & 0000 0011 == 0
// 非2的幂数
// 9 & 8 -> 0000 1001 & 0000 1000 != 0
// 总结出2的幂数m具备m & (m - 1) == 0的规律

{
	if((num > 0) && num&(num - 1) == 0)
		printf("%d 是 2的整数次幂\n", num);
	else
		printf("%d 不是 2的整数次幂\n", num);
	return ((num > 0)&&(num & (num - 1)) == 0);
}

int main ()
{
	// sizeof 和 三元运算符
	/*
	int a = 4;
	short b;
	double c;
	int* ptr;

	printf("Line1 - var a size = %lu\n", sizeof(a));
	printf("Line2 - var a size = %lu\n", sizeof(b));
	printf("Line3 - var a size = %lu\n", sizeof(c));

	ptr = &a;
	printf("value of a is %d\n", a);
	printf("*ptr is %d\n", *ptr);

	a = 10;
	b = (a == 1) ? 20 : 30;
	printf("value of is %d\n", b);

	b = (a == 10) ? 20 : 30;
	printf("value of b is %d\n", b);
	*/

	// 位运算符
	/*
	unsigned int a = 60;
	unsigned int b = 13;
	int c = 0;

	c = a & b;
	printf("Line 1 - value of c is %d\n", c);

	c = a | b;
	printf("Line 2 - value of c is %d\n", c);

	c = a ^ b;
	printf("Line 3 - value of c is %d\n", c);

	// 取反会涉及到补码的概念
	c = ~a;
	printf("Line 4 - value of c is %d\n", c);

	// c = ~b;
	// printf("Line 7 - value of c from b is %d\n", c);

	c = a << 2;
	printf("Line 5 - value of c is %d\n", c);
	
	c = a >> 2;
	printf("Line 6 - value of c is %d\n", c);
	*/
	
	// &和&& |和||作用是一样的，但在效率上明显&&和||会更高
	/*
	int a = 1, b = 2;
	if (a > 0 & b > 1)
		printf("Line1 That's true~\n");

	if (a > 0 & b > 2)
		printf("Line2 That's true~\n");
	else
		printf("Line2 That's false~\n");

	// 取余的符号由%左边的整数决定
	printf("100%%12=%d \n100%%-12=%d \n-100%%12=%d \n-100%%-12=%d \n", 100 % 12, 100 % -12, -100 % 12, -100 % -12);
	*/

	// 用异或进行数值交换，但是应该没有可移植性
	// a ^ b ^ a 结果为 b
	// a ^ b ^ b 结果为 a
	/*
	unsigned int a = 60;
	unsigned int b = 13;

	printf("a=%d, b=%d", a, b);

	printf("\n");

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a=%d, b=%d\n", a, b);
	*/

	printf("please input query int.\n");
	scanf("%d", &num);
	func(num);
	return 0;
}
