#ifndef INTERFACE_H
#define INTERFACE_H

typedef void (*DoAlgorithm)(void *);

typedef struct{
    DoAlgorithm algorithm;
} interface_t;
#endif