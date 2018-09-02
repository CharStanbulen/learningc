#include <stdio.h>
//#define BASIC
//#define GET_ARR_LEN
//#define ARR_KEEP
//#define ARR_ADDRESS
#define ARR_INIT

int main()
{
#ifdef BASIC
	int n[10];
	int i,j;

	for (i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	for (j = 0; j < 10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}
#endif

#ifdef GET_ARR_LEN
	//使用sizeof获取数组的长度
	int a[] = {1, 2, 3, 4, 5};
	int b;
	b = sizeof(a) / sizeof(a[0]);
	printf("array lenght is: %d\n", b);
#endif

#ifdef ARR_KEEP
	int cj[100] = {0};
	int n;
	int count = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &cj[i]);
	}

	double sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += cj[i];
	}

	double arg = sum / n;
	for(i = 0; i < n; i++)
	{
		if (cj[i] > arg) {
			count++;
		}
	}

	printf("The average score is: %0.2f.\nnumber of surpass average is %d.\n", arg, count);
#endif

#ifdef ARR_ADDRESS
	//a[0] 和 (a + 0)都代表相同的地址
	//数组是由连续的内存组成的
	int a[2] = {1, 2};
	printf("a = %d\n", a[0]);
	printf("*(a + 0) = %d\n", *(a + 0));
	printf("a[1] = %d\n", a[1]);
	printf("*a = %d\n", *a);
	printf("*(a + 1) = %d\n", *(a + 1));
	printf("\n");
	printf("addres of a is: %p\n", a);
	printf("addres of (a + 0) is: %p\n", (a+0));
	printf("addres of (a + 1) is: %p\n", (a+1));
	printf("\n");
#endif

#ifdef ARR_INIT
	// 数组a从下标第五个之后的成员的值均为0
	int a[10] = {12, 19, 22, 993, 344};
	// 不同数据类型的数组初始化成员
	int nums[10] = {0};
	char str[10] = {0};
	float scores[10] = {0};
	// 数组无法将所有的成员赋予相同的值
#endif

	return 0;
}
