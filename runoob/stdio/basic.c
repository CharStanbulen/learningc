#include <stdio.h>
//#define STDIO_CHAR
//#define STDIO_STRING
//#define STDIO_SCANF
//#define STDIO_FGETS
//#define STDIO_REG
//#define STDIO_FORMAT
#define STDIO_ASCII

int main ()
{
#ifdef STDIO_CHAR
	int c;

	printf("Enter a value : ");
	c = getchar();

	printf("\nYou entered: ");
	putchar(c);

	printf("\n");
#endif

#ifdef STDIO_STRING
	char str[100];

	printf("Enter a value : ");
	gets(str);

	printf("\nYou entered: ");
	puts(str);
	return 0;
#endif

#ifdef STDIO_SCANF
	char str[100];
	int i;

	printf("Enter a value : ");
	scanf("%s %d", str, &i);

	printf("\nYou entered: %s %d", str, i);
	printf("\n");
#endif

#ifdef STDIO_FGETS
	//gets不会限制传入数组的长度，会发生越界
	//而fgets是可以限制传入的数组长度n，他只会读取n-1位数组成员
	//最后一位用'\0'替换
	// 在linux中需要使用fgets和fputs来替代fget和fput
	char c[5];
	printf("Enter a value:");
	fgets(c, 5, stdin);

	printf("\nyou entered:");
	fputs(c,stdout);
#endif

#ifdef STDIO_REG
	int i;
	int c;
	scanf("%d %[^' '^'\n']", &i, &c);

	printf("%d, %c",i, c);
#endif

#ifdef STDIO_FORMAT
	double a = 1.0;
	//不指定类型的精度，长度将按系统而定
	printf("%f\n", a / 3);
	//%m.nf中n表示类型的精度，m标书输出的字符宽度
	printf("%20.15f\n", a / 3);
#endif

#ifdef STDIO_ASCII
	//和字符对应的ASCII码输出是完全相同的
	char a='B', b='O', c='Y';
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');

	a=66, b=79, c=89;
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
#endif

	return 0;
}
