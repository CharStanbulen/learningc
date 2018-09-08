#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define BASIC
#define REALLOC

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
