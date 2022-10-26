#ifndef CSC_H
#define CSC_H
#include "Interface.h"

typedef struct{
    interface_t csc;
}strC_t;

strC_t*StrC_New();
void StrC_Dtor(strC_t*);
//---------------------   oo   --------------------//
#endif