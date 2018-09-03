#include <stdio.h>
//#define BASIC
//#define ENUM_SWITCH
//#define ENUM_CONVER
#define ENUM_ERGODIC

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
	enum color favorite_color;

	printf("pls input your favorite color: (1. red, 2. green, 3. blue)");
    scanf("%d", &favorite_color);

    switch (favorite_color)
    {
        case red:
            printf("The color which you like is red.\n");
            break;
        case green:
            printf("The color which you like is green.\n");
            break;
        case blue:
            printf("The color which you like is blue.\n");
            break;
        default:
            printf("you have not choice favorite color.\n");
    }
#endif

#ifdef ENUM_CONVER
    enum day
    {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    } workday;

    int a = 1;
    enum day weekend;
    weekend = (enum day) a;
    printf("weekend: %d\n", weekend);
#endif

#ifdef ENUM_ERGODIC
    // 如下为遍历没有规律的枚举
    enum DAY {MON = 1, TUE, WED, THU = 7, FRI, SAT, SUN};
    enum DAY day;
    for (day = MON; day <= SUN; day++)
    {
        printf("day=%d\n", day);
    }
#endif

	return 0;
}
