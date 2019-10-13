#if !defined(_ULTIMATEO2_SENSOR_H)
#define _ULTIMATEO2_SENSOR_H

typedef struct UltimateO2SensorProxy UltimateO2SensorProxy;
struct UltimateO2SensorProxy {
    double O2Conc;
    double GasFlow;
};

/* constructors and destructors */
void UltimateO2SensorProxy_Init(UltimateO2SensorProxy *const me);
void UltimateO2SensorProxy_Cleanup(UltimateO2SensorProxy *const me);

double UltimateO2SensorProxy_accessO2Conc(const UltimateO2SensorProxy *const me);
double UltimateO2SensorProxy_accessGasFlow(const UltimateO2SensorProxy *const me);
void UltimateO2SensorProxy_newData(UltimateO2SensorProxy *const me, double o2, double flow);

UltimateO2SensorProxy *UltimateO2SensorProxy_Create(void);
void UltimateO2SensorProxy_Destroy(UltimateO2SensorProxy *const me);

#endif // _ULTIMATEO2_SENSOR_H
