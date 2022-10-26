#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Csb.h"

void _AlgoB(void * data){
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

strB_t*StrB_New(){
    strB_t * B;
    B = (strB_t *)malloc(sizeof(strB_t));
    B -> csb.algorithm = _AlgoB;
    return B;
}

void StrB_Dtor (strB_t * B){
    free(B);
}