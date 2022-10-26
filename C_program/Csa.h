#ifndef CSA_H
#define CSA_H
#include "Interface.h"

typedef struct{
    interface_t csa;
}strA_t;

strA_t*StrA_New();
void StrA_Dtor(strA_t*);
#endif