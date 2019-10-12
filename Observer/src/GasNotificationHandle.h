#if !defined(_GASNOTIFICATION_H)
#define _GASNOTIFICATION_H
#include "GasData.h"
/**
 * the function pointer type
 *  The first value of the function pointer is to the instance
 *  data of the class. The second is a ptr to the new gas data
  */
typedef void (*gasDataAcceptorPtr)(void *, struct GasData *);


typedef struct GasNotificationHandle GasNotificationHandle;
struct GasNotificationHandle {
    gasDataAcceptorPtr acceptorPtr;
    void *instancePtr;
};

/* constructors and destructors */
void GasNotificationHandle_Init(GasNotificationHandle *const me);
void GasNotificationHandle_Cleanup(GasNotificationHandle *const me);


GasNotificationHandle *GasNotificationHandle_Create(void);
void GasNotificationHandle_Destroy(GasNotificationHandle *const me);

#endif // _GASNOTIFICATION_H
