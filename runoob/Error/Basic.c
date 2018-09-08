#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//#define BASIC
//#define DIVISION
#define EXIT_CONDITION

extern int errno;

int main()
{
#ifdef BASIC
    FILE * pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "error no: %d\n", errno);
        perror("Output through perror error");
        fprintf(stderr, "Open file failed: %s\n", strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
#endif

#ifdef DIVISION
    int dividend = 20;
    int divisor = 0;
    int quotient;

    if (divisor == 0){
        fprintf(stderr, "Exit for divisor is 0...\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "value of quotient is: %d\n", quotient);
#endif

#ifdef EXIT_CONDITION
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if (divisor == 0) {
        fprintf(stderr, "Exit for divisor is 0...\n");
        exit(EXIT_FAILURE);
    }

    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient is: %d\n", quotient);
#endif

    //return 0;
    exit(EXIT_SUCCESS);
}

