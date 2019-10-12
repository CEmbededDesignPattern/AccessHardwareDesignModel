#include <stdlib.h>
#include "GraspingManipulator.h"

/* constructor and destructor */
void GraspingManipulator_Init(GraspingManipulator *const me)
{
    me->MaxForce = 0;
}
void GraspingManipulator_Cleanup(GraspingManipulator *const me)
{

}

int GraspingManipulator_setMaxForce(GraspingManipulator *const me, int force)
{
    me->MaxForce = force;
    return 0;
}

int GraspingManipulator_open(GraspingManipulator *const me)
{
    
    return 0;
}

int GraspingManipulator_close(GraspingManipulator *const me)
{

    return 0;
}

int GraspingManipulator_zero(GraspingManipulator *const me)
{
    me->MaxForce = 0;
    return 0;
}

GraspingManipulator *GraspingManipulator_Create(void)
{
    GraspingManipulator *me = (GraspingManipulator *)malloc(sizeof(GraspingManipulator));
    if (me != NULL)
    {
        GraspingManipulator_Init(me);
    }

    return me;
}

void GraspingManipulator_Destroy(GraspingManipulator *const me)
{
    if (me != NULL)
    {
        GraspingManipulator_Cleanup(me);
        free(me);
    }
}
