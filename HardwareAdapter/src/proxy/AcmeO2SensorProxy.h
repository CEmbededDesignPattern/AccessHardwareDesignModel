#if !defined(_ACMEO2_SENSOR_H)
#define _ACMEO2_SENSOR_H

typedef struct AcmeO2SensorProxy AcmeO2SensorProxy;
struct AcmeO2SensorProxy {
    unsigned int O2Conc;
    unsigned int O2Flow;
};

/* constructors and destructors */
void AcmeO2SensorProxy_Init(AcmeO2SensorProxy *const me);
void AcmeO2SensorProxy_Cleanup(AcmeO2SensorProxy *const me);

unsigned int AcmeO2SensorProxy_accessO2Conc(const AcmeO2SensorProxy *const me);
unsigned int AcmeO2SensorProxy_accessGasFlow(const AcmeO2SensorProxy *const me);
void AcmeO2SensorProxy_newData(AcmeO2SensorProxy *const me, unsigned int o2, unsigned int flow);

AcmeO2SensorProxy *AcmeO2SensorProxy_Create(void);
void AcmeO2SensorProxy_Destroy(AcmeO2SensorProxy *const me);

#endif // _ACMEO2_SENSOR_H
