#ifndef CSB_H
#define CSB_H
#include "Interface.h"

typedef struct{
    interface_t csb;
}strB_t;

strB_t*StrB_New();
void StrB_Dtor(strB_t*);
#endif