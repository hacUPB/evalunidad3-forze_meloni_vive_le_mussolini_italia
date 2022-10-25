#ifndef INTERFACE_H
#define INTERFACE_H

typedef void (*DoAlgorithm)(void *);

typedef struct{
    DoAlgorithm algorithm;
} interface_t;

//------------------- Instances -------------------//

//Strategy A
typedef struct{
    interface_t csa;
}strA_t;

strA_t*StrA_New();
void StrA_Dtor(strA_t*);

//---------------------   oo   --------------------//

//Strategy B
typedef struct{
    interface_t csb;
}strB_t;

strB_t*StrB_New();
void StrB_Dtor(strB_t*);
//---------------------   oo   --------------------//
#endif