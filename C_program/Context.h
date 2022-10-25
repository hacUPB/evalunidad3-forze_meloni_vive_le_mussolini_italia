#ifndef _CONTEXT_H
#define _CONTEXT_H
#include "Interface.h"

typedef struct{
    interface_t *strategy;
    char* data;
} context_t;

context_t *Context_New();

void Context_Ctor(context_t *,void *);
void Context_Dtor(context_t *);

void Context_SetI(context_t *,void *);
void Context_DoStuff(context_t *,char arr []);

#endif