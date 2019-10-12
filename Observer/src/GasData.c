#include <stdlib.h>
#include "GasData.h"


/* constructors and destructors */
void GasData_Init(GasData *const me)
{
    me->flowRate = 0;
    me->N2Conc = 0;
    me->O2Conc = 0;
}
void GasData_Cleanup(GasData *const me)
{
    
}


GasData *GasData_Create(void)
{
    GasData *me = (GasData *)malloc(sizeof(GasData));
    if (me != NULL)
    {
        GasData_Init(me);
    }
    
    return me;
}
void GasData_Destroy(GasData *const me)
{
    if (me != NULL)
    {
        GasData_Cleanup(me);
        free(me);
    }
}
