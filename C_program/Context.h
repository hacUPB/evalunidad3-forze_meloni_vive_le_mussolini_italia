#ifndef _CONTEXT_H
#define _CONTEXT_H
#include "Csc.h"

typedef struct Context{
    csc_t *interface;
}context_t;

context_t *Context_new();
void Construt(context_t *,csc_t *);
void Set_I(csc_t *);
void Do_Stuff();
void Destroy(context_t *);

#endif