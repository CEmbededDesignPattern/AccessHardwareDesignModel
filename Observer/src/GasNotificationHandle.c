#include <stdlib.h>
#include "GasNotificationHandle.h"


/* constructors and destructors */
void GasNotificationHandle_Init(GasNotificationHandle *const me)
{
    me->acceptorPtr = NULL;
    me->instancePtr = NULL;
}
void GasNotificationHandle_Cleanup(GasNotificationHandle *const me)
{
    
}


GasNotificationHandle *GasNotificationHandle_Create(void)
{
    GasNotificationHandle *me = (GasNotificationHandle *)malloc(sizeof(GasNotificationHandle));
    if (me != NULL)
    {
        GasNotificationHandle_Init(me);
    }

    return me;
}
void GasNotificationHandle_Destroy(GasNotificationHandle *const me)
{
    if (me != NULL)
    {
        GasNotificationHandle_Cleanup(me);
        free(me);
    }
}
