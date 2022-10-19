#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Context.h"

context_t *context_new()
{
    context_t *context = (context_t *)malloc(sizeof(context_t));
    return context;
}

void Construct(context_t * con, csc_t *csc)
{
    con->strategy = csc;
}

void Set_I(context_t * con, csc_t *csc)
{
    con->strategy = csc;
}

void Destroy(context_t * con)
{
    free(con);
}

void Do_Stuff()
{

}