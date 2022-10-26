#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Interface.h"

void _AlgoC(void * data){
    printf("Context: Sorting data using the strategy (not sure how it'll do it)\n");
    char string [20];
    strcpy(string,(char *)data);
    char temp;
    int i, j;
    int n = strlen(data);

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if (string[i] < string[j]){
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("%s\n", string);
}

strC_t*StrC_New(){
    strC_t * C;
    C = (strC_t *)malloc(sizeof(strC_t));
    C -> csc.algorithm = _AlgoC;
    return C;
}

void StrC_Dtor (strC_t * C){
    free(C);
}