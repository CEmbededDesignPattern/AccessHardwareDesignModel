#if !defined(_SLIDINGARMJOINT_H)
#define _SLIDINGARMJOINT_H

typedef struct SlidingArmJoint SlidingArmJoint;
struct SlidingArmJoint {
    char deviceID[20];
    int currentLength;
    int minArmLength;
    int maxArmLength;
};

/* constructor and destructo */
void SlidingArmJoint_Init(SlidingArmJoint *const me);
void SlidingArmJoint_Cleanup(SlidingArmJoint *const me);

/* operation */
int SlidingArmJoint_setLength(SlidingArmJoint *const me, int length);
int SlidingArmJoint_zero(SlidingArmJoint *const me);

SlidingArmJoint *SlidingArmJoint_Create(void);
void SlidingArmJoint_Destroy(SlidingArmJoint *const me);

#endif // _SLIDINGARMJOINT_H
