#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Interface.h"

void _AlgoB(void * tag)
{

}

strB_t*strA_new()
{
    strB_t * A;
    A = (strB_t *)malloc(sizeof(strB_t));
    A -> csB.algorithm = _AlgoB;
}