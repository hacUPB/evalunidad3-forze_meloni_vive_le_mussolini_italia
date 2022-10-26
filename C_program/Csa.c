#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Csa.h"

void _AlgoA(void * data)
{
    printf("Context: Sorting data using the strategy (not sure how it'll do it)\n");
    char string [20];
    strcpy(string,(char *)data);
    printf("%s\n", string);
}

strA_t*StrA_New(){
    strA_t * A;
    A = (strA_t *)malloc(sizeof(strA_t));
    A -> csa.algorithm = _AlgoA;
    return A;
}

void StrA_Dtor (strA_t * A){
    free(A);
}