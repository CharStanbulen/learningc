#include <stdio.h>
#include <math.h>

//#define UNLIMIT_CIRCLE 0
//#define DEMO1_WHILE_SUM_ODD_EVEN
//#define DEMO2_for_SUM_ODD_EVEN
//#define DEMO3_DOSQRT

//#define DEMO4_PRIME
//素数基本概念
//素数prime number又称作质数)，除了1和其本身不再有其他因数。
//这里是数学原理，质数可以直接和小于这个质数开根号后的数做运算比较。

//#define DEMO5_SUM_ODD_EVEN

//#define DEMO_BREAK

//#define DEMO_CONTINUE

#define DEMO_GOTO

//#define DEMO6
//打印100~200内不能被3整除的数


#ifdef DEMO3_DOSQRT
// used to get sqrt result
double DoSqrt(double z) {
	double a = 1;
	double b = 0;
	double c = 0;
	do{
		if (b * b < z) {
			b += a;
		} else {
			c = b;
			b -= a;
			a /= 10;
		}
	}while(a>0.000001);

	return (b + c) / 2;
}
#endif

#ifdef DEMO4_PRIME
int print_prime(int n) {
	int i;
	for (i = 2; i < sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	printf("%d,\t", n);
}
#endif

int main ()
{
	// 1无限循环
#ifdef UNLIMIT_CIRCLE
	for (;;)
	{
		printf("this circle will exceed forever!\n");
	}
#endif

#ifdef DEMO1_WHILE_SUM_ODD_EVEN
	int sum = 0;
	int num = 1;
	int sum2 = 0;
	int num2 = 2;

	while (num < 100) {
		sum = sum + num;
		num = num + 2;
	}
	printf("the sum of odd number is: %d\n", sum);

	while (num2 <= 100) {
		sum2 = sum2 + num2;
		num2 = num2 + 2;
	}

	printf("sum of the evens is: %d\n", sum2);
#endif

#ifdef DEMO2_for_SUM_ODD_EVEN
	int sum = 0;
	int sum2 = 0;
	int num, num2;
	for(num=1; num<100; num=num+2){
		sum = sum + num;
	}
	printf("sum of odd is: %d\n", sum);

	for(num2=2; num2<=100; num2=num2+2){
		sum2 = sum2 + num2;
	}
	printf("sum of even is: %d\n", sum2);
#endif

#ifdef DEMO3_DOSQRT
	double x,y;
	printf("pls input a number:");
	scanf("%lf", &x);
	if (x < 0) {
		printf("Input Error!\n");
	} else {
		y = DoSqrt(x);
		printf("sqrt of %g is: %g.\n", x, y);
	}
	static int z = 1;
	printf("%d\n", z);
	while (z < 3) {
		z++;
		printf("%d\n", z);
		main();
	}
#endif

#ifdef DEMO4_PRIME
	int i, j;
	for (i = 2; i < 100; i++)
	{
		print_prime(i);
	}
	printf("\n");
#endif

#ifdef DEMO5_SUM_ODD_EVEN
	int num = 0, odd = 0, even = 0;
	for (;num <= 100; num++){
		if(num % 2 == 0)
			even += num;
		else
			odd += num;
	}

	printf("Odd number sum is %d\n", odd);
	printf("Even number sum is %d\n", even);
#endif

#ifdef DEMO6
	int n;
	for (n = 100; n<=200; n++)
	{
		if(n % 3 == 0)
			continue;
		printf("%d\n", n);
	}
#endif

#ifdef DEMO_BREAK
	int a = 10;

	while (a < 20) {
		printf("value of a is: %d\n", a);
		a++;
		if (a > 15) {
			break;
		}
	}
#endif

#ifdef DEMO_CONTINUE
	int a = 10;

	do
	{
		if (a == 15) {
			a++;
			continue;
		}
		printf("value of a is: %d\n", a);
		a++;
	} while (a < 20);
#endif

#ifdef DEMO_GOTO
	int a = 10;

	// do...while循环体结构至少会循环一次
	LOOP:do
	{
		if (a == 15)
		{
			a = a + 1;
			goto LOOP;
		}
		printf("value of a is %d\n", a);
		a++;
	}while(a < 20);
#endif

return 0;
}
