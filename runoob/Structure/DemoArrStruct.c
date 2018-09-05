#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXTITL 41
#define MAXAUTL 31
#define MAVXBKS 3

char *s_gets(char *st, int n);
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main ()
{
    struct book library[MAVXBKS];
    int i;
    int index;
    
    do
    {
        scanf("%d", &index);
    } while (index > MAVXBKS);

    getchar();
    for (i = 0; i < index; i++)
    {
        printf("please input %d book name:\n", i + 1);
        s_gets(library[i].title, MAXTITL);
        printf("please input book author:\n");
        s_gets(library[i].author, MAXAUTL);
        printf("please input book value:\n");
        scanf("%f", &library[i].value);
        getchar();
    }

    for (i = 0; i < index; i++)
    {
        printf("%d\t%s is written by %s, the price is %f.\n", i, library[i].title, library[i].author, library[i].value);
    }

    return 0;
}

char *s_gets(char *st, int n)
{

    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if(find) {
            *find = '\0';
        } else {
            printf("Error occured!");
            EXIT_FAILURE;
        }
    }

    return ret_val;
}
