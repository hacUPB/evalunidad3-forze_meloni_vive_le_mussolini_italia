#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Interface.h"

void _AlgoB(void * tag)
{

}

strB_t*strB_new()
{
    strB_t * B;
    B = (strB_t *)malloc(sizeof(strB_t));
    B -> csb.algorithm = _AlgoB;
}