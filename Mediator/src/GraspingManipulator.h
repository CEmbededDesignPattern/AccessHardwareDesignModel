#if !defined(_GRASPINg_MANIPULATOR_H)
#define _GRASPINg_MANIPULATOR_H

typedef struct GraspingManipulator GraspingManipulator;
struct GraspingManipulator {
    char deviceID[20];
    int MaxForce;
};

/* constructor and destructor */
void GraspingManipulator_Init(GraspingManipulator *const me);
void GraspingManipulator_Cleanup(GraspingManipulator *const me);

int GraspingManipulator_setMaxForce(GraspingManipulator *const me, int force);
int GraspingManipulator_open(GraspingManipulator *const me);
int GraspingManipulator_close(GraspingManipulator *const me);
int GraspingManipulator_zero(GraspingManipulator *const me);

GraspingManipulator *GraspingManipulator_Create(void);
void GraspingManipulator_Destroy(GraspingManipulator *const me);

#endif // _GRASPINg_MANIPULATOR_H
