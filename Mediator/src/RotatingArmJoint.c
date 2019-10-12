#include <stdlib.h>
#include "RotatingArmJoint.h"

/* constructor and destructor */
void RotatingArmJoint_Init(RotatingArmJoint *const me)
{
    me->angle = 0;
}

void RotatingArmJoint_Cleanup(RotatingArmJoint *const me)
{

}


/* operations */
int RotatingArmJoint_rotate(RotatingArmJoint *const me, int angle)
{
    me->angle = angle;
    return 0;
}


int RotatingArmJoint_zero(RotatingArmJoint *const me)
{
    me->angle = 0;
    return 0;
}


RotatingArmJoint *RotatingArmJoint_Create(void)
{
    RotatingArmJoint *me = (RotatingArmJoint *)malloc(sizeof(RotatingArmJoint));
    if (me != NULL)
    {
        RotatingArmJoint_Init(me);
    }
    
    return me;
}
void RotatingArmJoint_Destroy(RotatingArmJoint *const me)
{
    if (me != NULL)
    {
        RotatingArmJoint_Cleanup(me);
        free(me);
    }
}