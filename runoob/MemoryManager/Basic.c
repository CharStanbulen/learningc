#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define BASIC
#define REALLOC

//mark
//在GUN标准下void*和char*是一样的如下写法是正确的
//description = malloc(200 * sizeof(char));
//在ANSI下不允许这么做必须强制转换
//description = (char *)malloc(200 * sizeof(char));
//在ANSI下不允许对void指针进行算法操作
//在GNU下则是允许这样操作的
//void * pvoid
//pvoid++ ANSI错误
//pvoid_+= 1 ANSI错误

int main()
{
#ifdef BASIC
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    description = (char *)malloc(200 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Wenliang a DPS student in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
#endif

#ifdef REALLOC
    char name[100];
    char *description;

    strcpy(name, "zara Ali");
    description = (char *)malloc(30 * sizeof(char));
    if(description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Wenliang is a DPS student.");
    }
    description = realloc(description, 100 * sizeof(char));
    if(description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate rquired memory\n");
    }
    else
    {
        strcat(description, "She is in class 10th");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);

    free(description);
#endif

    return 0;
}
