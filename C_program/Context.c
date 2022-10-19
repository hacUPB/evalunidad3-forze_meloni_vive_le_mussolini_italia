#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Context.h"

context_t *Context_new()
{
    return (context_t *)malloc(sizeof(context_t));
}