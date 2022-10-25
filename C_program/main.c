#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
#include "Interface.h"

int main(void)
{
    context_t *Context = Context_New();
    strA_t *StrategyA = StrA_New();
    strB_t *StrategyB = StrB_New();

    Context_Ctor(Context,StrategyA);
    char data [] = "bacdef";

    printf("Client: Strategy is set to normal sorting.\n");
    Context_DoStuff(Context,data);
    printf("\n");
    printf("Client: Strategy is set to normal sorting.\n");
    Context_SetI(Context,StrategyB);
    Context_DoStuff(Context,data);

    StrA_Dtor(StrategyA);
    free(StrategyA);
    StrB_Dtor(StrategyB);
    free(StrategyB);
    Context_Dtor(Context);
    free(Context);

    return 0;
}