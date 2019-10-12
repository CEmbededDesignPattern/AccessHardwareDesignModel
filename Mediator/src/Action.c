#include <stdlib.h>
#include "Action.h"

/* Constructor and Destructor */
void Action_Init(Action *const me)
{
    me->rotatingArmJoint1 = 0;
    me->rotatingArmJoint2 = 0;
    me->rotatingArmJoint3 = 0;
    me->rotatingArmJoint4 = 0;

    me->slidingArmJoint1 = 0;
    me->slidingArmJoint2 = 0;

    me->manipulatorForce = 0;
    me->manipulatorOpen = 0;
}

void Action_Cleanup(Action *const me)
{

}


Action *Action_Create(void)
{
    Action *me = (Action *)malloc(sizeof(Action));
    if (me != NULL)
    {
        Action_Init(me);
    }

    return me;
}

void Action_Destroy(Action *const me)
{
    if (me != NULL)
    {
        Action_Cleanup(me);
        free(me);
    }
}
