#ifndef INTERFACE_H
#define INTERFACE_H

typedef void (*DoAlgorithm)(void *);

typedef struct _csc{
    DoAlgorithm algorithm;
} csc_t;

csc_t *csc_new();

//------------------- Instances -------------------//

typedef struct _strA{
    csc_t csA;
}strA_t;

strA_t*strA_new();

typedef struct _strB{
    csc_t csB;
}strB_t;

strB_t*strB_new();

//---------------------   oo   --------------------//
#endif