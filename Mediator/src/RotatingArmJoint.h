#if !defined(_ROTATINGARMJOINT_H)
#define _ROTATINGARMJOINT_H

typedef struct RotatingArmJoint RotatingArmJoint; 
struct RotatingArmJoint {
    char deviceID[20];
    int angle;
};

/* constructor and destructor */
void RotatingArmJoint_Init(RotatingArmJoint *const me);
void RotatingArmJoint_Cleanup(RotatingArmJoint *const me);


/* operations */
int RotatingArmJoint_rotate(RotatingArmJoint *const me, int angle);
int RotatingArmJoint_zero(RotatingArmJoint *const me);

RotatingArmJoint *RotatingArmJoint_Create(void);
void RotatingArmJoint_Destroy(RotatingArmJoint *const me);


#endif // _ROTATINGARMJOINT_H
