#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Interface.h"

void _AlgoA(void * tag)
{

}

strA_t*strA_new()
{
    strA_t * A;
    A = (strA_t *)malloc(sizeof(strA_t));
    A -> csa.algorithm = _AlgoA;
}