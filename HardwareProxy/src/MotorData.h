#if !defined(_MOTORDATA_H)
#define _MOTORDATA_H

#include "HardwareProxyExample.h"
typedef struct MotorData MotorData;
struct MotorData {
    unsigned char on_off;
    DirectionType direction;
    unsigned int speed;
    unsigned char errorStatus;
    unsigned char noPowerError;
    unsigned char noTorqueError;
    unsigned char BITError;
    unsigned char overTemperatureError;
    unsigned char reversedError1;
    unsigned char reversedError2;
    unsigned char unknownError;
};

#endif // _MOTORDATA_H
