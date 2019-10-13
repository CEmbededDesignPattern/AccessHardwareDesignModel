#include <stdlib.h>
#include "UltimateO2SensorProxy.h"

/* constructors and destructors */
void UltimateO2SensorProxy_Init(UltimateO2SensorProxy *const me)
{
    me->GasFlow = 0;
    me->O2Conc = 0;
}
void UltimateO2SensorProxy_Cleanup(UltimateO2SensorProxy *const me)
{

}

double UltimateO2SensorProxy_accessO2Conc(const UltimateO2SensorProxy *const me)
{
    return me->O2Conc;
}
double UltimateO2SensorProxy_accessGasFlow(const UltimateO2SensorProxy *const me)
{
    return me->GasFlow;
}
void UltimateO2SensorProxy_newData(UltimateO2SensorProxy *const me, double o2, double flow)
{
    me->GasFlow = flow;
    me->O2Conc = o2;
}

UltimateO2SensorProxy *UltimateO2SensorProxy_Create(void)
{
    UltimateO2SensorProxy *me = (UltimateO2SensorProxy *)malloc(sizeof(UltimateO2SensorProxy));
    if (me != NULL)
    {
        UltimateO2SensorProxy_Init(me);
    }

    return me;
}
void UltimateO2SensorProxy_Destroy(UltimateO2SensorProxy *const me)
{
    if (me != NULL)
    {
        UltimateO2SensorProxy_Cleanup(me);
        free(me);
    }
}
