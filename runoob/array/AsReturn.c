#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//c语言不允许返回完整形式的数组
//可以通过定义一个不带索引的数组指针，返回数组指针

int *getRandom()
{
	static int r[10];
	int i;

	// 利用可变的time函数使得到的随机数更随机
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; ++i)
	{
		r[i] = rand();
		printf("r[%d] = %d\n", i, r[i]);
	}

	return r;
}

int main()
{
	int *p;
	int i;

	p = getRandom();
	for(i = 0; i < 10; i++)
	{
		//如果这里不给指针加*将无法访问指针对应的值，访问的是指针本身。
		printf("*(p + %d) : %d\n", i, *(p + i));
		//printf("*(p + %d) : %p\n", i, (p + i));
	}

	return 0;
}
