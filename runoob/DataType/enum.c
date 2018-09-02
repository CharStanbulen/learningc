#include <stdio.h>
//#define BASIC
#define ENUM_SWITCH

#ifdef BASIC
enum DAY
{
	MON=1, TUE, WEN, THU, FRI, SAT, SUN
} day;
#endif

int main()
{
#ifdef BASIC
	//枚举被当做init 或者 unsigned int来处理按照c语言规范无法遍历
	//但是在连续状态下枚举可以遍历
	for(day = MON; day <= SUN; day++)
	printf("enum number is %d.\n", day);
#endif

#ifdef ENUM_SWITCH
	enum color {red = 1, green, blue};
	enum color favorate_color;

	printf("pls input your lov");
#endif

	return 0;
}
