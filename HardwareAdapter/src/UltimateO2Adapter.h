#if !defined(_ULTIMATEO2_ADAPTER_H)
#define _ULTIMATEO2_ADAPTER_H
#include "proxy/UltimateO2SensorProxy.h"

typedef struct UltimateO2Adapter UltimateO2Adapter;
struct UltimateO2Adapter {
    UltimateO2SensorProxy *proxy;
};

/* constructors and destructors */
void UltimateO2Adapter_Init(UltimateO2Adapter *const me);
void UltimateO2Adapter_Cleanup(UltimateO2Adapter *const me);

int UltimateO2Adapter_gimmeO2Flow(UltimateO2Adapter *const me);
int UltimateO2Adapter_gimmeO2Conc(UltimateO2Adapter *const me);

UltimateO2Adapter *UltimateO2Adapter_Create(void);
void UltimateO2Adapter_Destroy(UltimateO2Adapter *const me);

#endif // _ULTIMATEO2_ADAPTER_H
