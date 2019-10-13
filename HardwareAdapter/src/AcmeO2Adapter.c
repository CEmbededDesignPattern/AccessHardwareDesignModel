#include <stdlib.h>
#include "AcmeO2Adapter.h"

static void cleanUpRelations(AcmeO2Adapter *const me);
static void initRelations(AcmeO2Adapter *const me);

/* constructors and destructors */
void AcmeO2Adapter_Init(AcmeO2Adapter *const me)
{
    me->proxy = NULL;
    initRelations(me);
}
void AcmeO2Adapter_Cleanup(AcmeO2Adapter *const me)
{
    cleanUpRelations(me);
}

int AcmeO2Adapter_gimmeO2Flow(AcmeO2Adapter *const me)
{
    return (AcmeO2SensorProxy_accessGasFlow(me->proxy) * 60) / 100;
}
int AcmeO2Adapter_gimmeO2Conc(AcmeO2Adapter *const me)
{
    return AcmeO2SensorProxy_accessO2Conc(me->proxy);
}

AcmeO2Adapter *AcmeO2Adapter_Create(void)
{
    AcmeO2Adapter *me = malloc(sizeof(AcmeO2Adapter));
    if (me != NULL)
    {
        AcmeO2Adapter_Init(me);
    }

    return me;
}
void AcmeO2Adapter_Destroy(AcmeO2Adapter *const me)
{
    if (me != NULL)
    {
        AcmeO2Adapter_Cleanup(me);
        free(me);
    }
}

static void cleanUpRelations(AcmeO2Adapter *const me)
{
    if (me != NULL)
    {
        AcmeO2SensorProxy_Destroy(me->proxy);
        me->proxy = NULL;
    }
}
static void initRelations(AcmeO2Adapter *const me)
{
    if (me->proxy == NULL)
    {
        me->proxy = AcmeO2SensorProxy_Create();
    }
}
