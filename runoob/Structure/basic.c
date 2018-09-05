#include <stdio.h>

//结构体大小
//1 + 3 + 4 + 8 = 16
typedef struct t1 {
	char x;
	int y;
	double z;
}T1;

//结构体大小
//1 + 7 + 8 + 4 = 22
//结果必须是宽度最大的结构体成员的倍数
//所以结果 = 1 + 7 + 8 + 4 + 4 = 24
typedef struct t2 {
	char x;
	double z;
	int y;
}T2;

int main(int argc, char* argv[])
{
	printf("sizeof(T1) = %lu\n", sizeof(T1));
	printf("sizeof(T2) = %lu\n", sizeof(T2));

	return 0;
}
