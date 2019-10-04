#include <stdio.h>
#include "src/MotorProxy.h"

int main(int argc, char const *argv[])
{
    unsigned int addr = 0;
    unsigned int rotaryArmLength = 0;

    MotorProxy *motorProxy;
    motorProxy = MotorProxy_Create();

    MotorProxy_configure(motorProxy, rotaryArmLength, &addr);
    MotorProxy_initialize(motorProxy);

    printf("motor default state:0x%08x\n", addr);
    MotorProxy_disable(motorProxy);
    printf("motor current state:0x%08x\n", addr);
    MotorProxy_enable(motorProxy);
    printf("motor current state:0x%08x\n", addr);

    MotorProxy_writeMotorSpeed(motorProxy, FORWARD, 10);

    printf("motor current speed:%d\n", MotorProxy_accessMotorSpeed(motorProxy));

    return 0;
}
