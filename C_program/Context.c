#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Context.h"

context_t *Context_New(){
    return(context_t *)malloc(sizeof(context_t));
}

void Context_Ctor(context_t * context, void *interface){
    context->strategy = (interface_t *)interface;
}

void Context_Dtor(context_t * context){
    free(context->data);
    free(context);
}

void Context_SetI(context_t * context, void *interface){
    context->strategy = (interface_t *)interface;
}

void Context_DoStuff(context_t * context, char arr []){
    context->data = malloc(sizeof(context->data = arr));
    strcpy(context->data, arr);
    context-> strategy->algorithm(context->data);
}