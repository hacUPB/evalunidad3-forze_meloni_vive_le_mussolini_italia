#ifndef INTERFACE_H
#define INTERFACE_H

typedef void (*DoAlgorithm)(void *);

typedef struct _csc{
    DoAlgorithm algorithm;
} csc_t;

//------------------- Instances -------------------//

//Strategy A
typedef struct _strA{
    csc_t csa;
}strA_t;

strA_t*strA_new();

//Strategy B
typedef struct _strB{
    csc_t csb;
}strB_t;

strB_t*strB_new();

//---------------------   oo   --------------------//
#endif