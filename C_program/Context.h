#ifndef _CONTEXT_H
#define _CONTEXT_H
#include "Interface.h"

typedef struct{
    csc_t *interface;
    char *tag;
}context_t;

context_t *context_new();

void Construct(context_t *,csc_t *);
void Set_I(context_t *,csc_t *);
void Do_Stuff();
void Destroy(context_t *);

#endif