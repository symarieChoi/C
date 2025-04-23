#include <stdio.h>
#include <stdlib.h>

void main()
{
    short **pp;
    pp = (short **)malloc(sizeof(short *));
    *pp = (short *)malloc(sizeof(short));

    **pp = 10;
    printf("**pp : %d\n", **pp);
    free(*pp);
    free(pp);
}