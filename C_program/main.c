#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
#include "Interface.h"
#include "Csa.h"
#include "Csb.h"
#include "Csc.h"

int main(void)
{
    context_t *Context = Context_New();
    strA_t *StrategyA = StrA_New();
    strB_t *StrategyB = StrB_New();
    strC_t *StrategyC = StrC_New();

    Context_Ctor(Context,StrategyA);
    char data [] = "bacfed";

    printf("Client: Strategy is set to normal sorting.\n");
    Context_DoMeth(Context,data);
    printf("\n");
    printf("Client: Strategy is set to normal sorting.\n");
    Context_SetI(Context,StrategyB);
    Context_DoMeth(Context,data);
     printf("\n");
    printf("Client: Strategy is set to normal sorting.\n");
    Context_SetI(Context,StrategyC);
    Context_DoMeth(Context,data);
     printf("\n");

    StrA_Dtor(StrategyA);
    //free(StrategyA);
    StrB_Dtor(StrategyB);
    //free(StrategyB);
    StrC_Dtor(StrategyC);
    //free(StrategyC);
    Context_Dtor(Context);
    //free(Context);

    return 0;
}