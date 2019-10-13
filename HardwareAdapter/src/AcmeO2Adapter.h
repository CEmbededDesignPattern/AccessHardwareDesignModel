#if !defined(ACMEO2_ADAPTER_H)
#define ACMEO2_ADAPTER_H
#include "proxy/AcmeO2SensorProxy.h"

typedef struct AcmeO2Adapter AcmeO2Adapter;
struct AcmeO2Adapter {
    AcmeO2SensorProxy *proxy;
};

/* constructors and destructors */
void AcmeO2Adapter_Init(AcmeO2Adapter *const me);
void AcmeO2Adapter_Cleanup(AcmeO2Adapter *const me);

int AcmeO2Adapter_gimmeO2Flow(AcmeO2Adapter *const me);
int AcmeO2Adapter_gimmeO2Conc(AcmeO2Adapter *const me);

AcmeO2Adapter *AcmeO2Adapter_Create(void);
void AcmeO2Adapter_Destroy(AcmeO2Adapter *const me);

#endif // ACMEO2_ADAPTER_H
