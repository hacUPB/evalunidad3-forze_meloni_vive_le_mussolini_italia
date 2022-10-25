#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Interface.h"

void _AlgoB(void * data)
{
    printf("Context: Sorting data using the strategy (not sure how it'll do it)\n");
    char string [20];
    strcpy(string,(char *)data);
    printf("%s\n", string);
}

strB_t*StrB_New()
{
    strB_t * B;
    B = (strB_t *)malloc(sizeof(strB_t));
    B -> csb.algorithm = _AlgoB;
    return B;
}

void StrB_Dtor (strB_t * B)
{
    free(B);
}