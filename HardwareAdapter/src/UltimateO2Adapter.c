#include <stdlib.h>
#include "UltimateO2Adapter.h"

static void cleanUpRelations(UltimateO2Adapter *const me);
static void initRelations(UltimateO2Adapter *const me);
/* constructors and destructors */
void UltimateO2Adapter_Init(UltimateO2Adapter *const me)
{
    me->proxy = NULL;
    initRelations(me);
}

void UltimateO2Adapter_Cleanup(UltimateO2Adapter *const me)
{
    cleanUpRelations(me);
}

int UltimateO2Adapter_gimmeO2Flow(UltimateO2Adapter *const me)
{
    double totalFlow;
    // convert from liters/hr to cc/min
    totalFlow = UltimateO2SensorProxy_accessGasFlow(me->proxy) * 1000.0 / 60.0;
    // now return the portion of the flow due to oxygen and return it as an integer
    return (int)(totalFlow * UltimateO2SensorProxy_accessO2Conc(me->proxy));
}

int UltimateO2Adapter_gimmeO2Conc(UltimateO2Adapter *const me)
{
    return (int)(UltimateO2SensorProxy_accessO2Conc(me->proxy));
}

UltimateO2Adapter *UltimateO2Adapter_Create(void)
{
    UltimateO2Adapter *me = (UltimateO2Adapter *)malloc(sizeof(UltimateO2Adapter));
    if (me != NULL)
    {
        UltimateO2Adapter_Init(me);
    }

    return me;
}
void UltimateO2Adapter_Destroy(UltimateO2Adapter *const me)
{
    if (me != NULL)
    {
        UltimateO2Adapter_Cleanup(me);
        free(me);
    }
}

void initRelations(UltimateO2Adapter *const me)
{
    if (me->proxy == NULL)
    {
        me->proxy = UltimateO2SensorProxy_Create();
    }
}

void cleanUpRelations(UltimateO2Adapter *const me)
{
    if (me->proxy != NULL)
    {
        UltimateO2SensorProxy_Destroy(me->proxy);
        me->proxy = NULL;
    }
}
