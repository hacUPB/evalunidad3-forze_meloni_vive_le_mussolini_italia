#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Interface.h"

void _AlgoA(void * data)
{
    printf("Context: Sorting data using the strategy (not sure how it'll do it)\n");
    char string [20];
    strcpy(string,(char *)data);
    char temp;
    int i, j;
    int n = strlen(data);

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if (string[i] > string[j]){
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }

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