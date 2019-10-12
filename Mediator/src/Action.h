#if !defined(_ACTION_H)
#define _ACTION_H

typedef struct Action Action;
struct Action {
    int rotatingArmJoint1;
    int rotatingArmJoint2;
    int rotatingArmJoint3;
    int rotatingArmJoint4;
    int slidingArmJoint1;
    int slidingArmJoint2;
    int manipulatorForce;
    int manipulatorOpen;
};

/* Constructor and Destructor */
void Action_Init(Action *const me);
void Action_Cleanup(Action *const me);


Action *Action_Create(void);
void Action_Destroy(Action *const me);


#endif // _ACTION_H
