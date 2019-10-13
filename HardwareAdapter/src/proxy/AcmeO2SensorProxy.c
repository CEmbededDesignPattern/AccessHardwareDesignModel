#include <stdlib.h>
#include "AcmeO2SensorProxy.h"

/* constructors and destructors */
void AcmeO2SensorProxy_Init(AcmeO2SensorProxy *const me)
{
    me->O2Conc = 0;
    me->O2Flow = 0;
}
void AcmeO2SensorProxy_Cleanup(AcmeO2SensorProxy *const me)
{

}

unsigned int AcmeO2SensorProxy_accessO2Conc(const AcmeO2SensorProxy *const me)
{
    return me->O2Conc;
}
unsigned int AcmeO2SensorProxy_accessGasFlow(const AcmeO2SensorProxy *const me)
{
    return me->O2Flow;
}
void AcmeO2SensorProxy_newData(AcmeO2SensorProxy *const me, unsigned int o2, unsigned int flow)
{
    me->O2Flow = flow;
    me->O2Conc = o2;
}

AcmeO2SensorProxy *AcmeO2SensorProxy_Create(void)
{
    AcmeO2SensorProxy *me = (AcmeO2SensorProxy *)malloc(sizeof(AcmeO2SensorProxy));
    if (me != NULL)
    {
        AcmeO2SensorProxy_Init(me);
    }

    return me;
}
void AcmeO2SensorProxy_Destroy(AcmeO2SensorProxy *const me)
{
    if (me != NULL)
    {
        AcmeO2SensorProxy_Cleanup(me);
        free(me);
    }
}
