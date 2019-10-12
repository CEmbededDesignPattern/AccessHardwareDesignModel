#include <stdlib.h>
#include "SlidingArmJoint.h"

/* constructor and destructo */
void SlidingArmJoint_Init(SlidingArmJoint *const me)
{
    me->currentLength = 0;
}
void SlidingArmJoint_Cleanup(SlidingArmJoint *const me)
{

}

/* operation */
int SlidingArmJoint_setLength(SlidingArmJoint *const me, int length)
{
    me->currentLength = length;
    return 0;
}

int SlidingArmJoint_zero(SlidingArmJoint *const me)
{
    me->currentLength = 0;
    return -1;
}

SlidingArmJoint *SlidingArmJoint_Create(void)
{
    SlidingArmJoint *me = (SlidingArmJoint *)malloc(sizeof(SlidingArmJoint));
    if (me != NULL)
    {
        SlidingArmJoint_Init(me);
    }

    return me;
}

void SlidingArmJoint_Destroy(SlidingArmJoint *const me)
{
    if (me != NULL)
    {
        SlidingArmJoint_Cleanup(me);
        free(me);
    }
}
