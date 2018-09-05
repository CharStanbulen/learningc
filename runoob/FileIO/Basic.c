#include <stdio.h>
//#define BASIC
//#define READ
#define FILE_SEEK

int main()
{
#ifdef BASIC
	FILE *fp = NULL;

	fp = fopen("test.txt", "w+");
	fprintf(fp, "This is testing for fprint...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
#endif

#ifdef READ
	FILE *fp = NULL;
	char buff[255];

	//fcanf输出扫描到空格前的字符串内容
	fp = fopen("test.txt", "r");
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	//fgets输出扫描到换行符之前的字符串内容
	fgets(buff, 255, fp);
	printf("1: %s\n", buff);

	fgets(buff, 255, fp);
	printf("1: %s\n", buff);
	fclose(fp);
#endif

#ifdef FILE_SEEK
	FILE *fp = NULL;
	fp = fopen("test.txt", "r+");
	fprintf(fp, "This is testing for fprintf...\n");
	//fseek移动文件指针的偏移量
	fseek(fp, 10, SEEK_SET);
	//fputc向文件写入一个字符
	//如果fail则返回EOF
	if (fputc(65, fp) == EOF) {
		printf("fputc fail");
	}
	close(fp);
#endif

	return 0;
}
