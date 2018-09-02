#include <stdio.h>
//#define BASIC
//#define ARR_STRING
#define ARR_STEP

int main()
{
#ifdef BASIC
	int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
#endif

#ifdef ARR_STRING
	int i;
	char name[6][50] = {"wenliang", "char", "cart", "cc", "lion", "test"};
	for (i = 0; i < 6; i++)
	{
		printf("person name is:%s\n", name[i]);
	}
#endif

#ifdef ARR_STEP
	int age[6][4];
	int i, j;
	for (i = 0; i < sizeof(age) / sizeof(age[0]); i++)
	{
		printf("age + %d address is %p\n", i, age + i);
	}
	for (i = 0; i < sizeof(age) / sizeof(age[0]); i++)
	{
		for (j = 0; j < sizeof(age[0]) / sizeof(int); j++)
		{
			//一个int的大小为4字节
			//4个int组成的数组大小为16字节,所以二维数组age的步长为16字节
			printf("age[%d][0] + %d address is %p\n", i, j, &age[i][0] + j);
		}
	}
#endif

	return 0;
}
