#if !defined(_DISPLAYCLIENT_H)
#define _DISPLAYCLIENT_H
#include "GasSensor.h"

typedef struct DisplayClient DisplayClient;
struct DisplayClient {
    struct GasData *itsGasData;
    struct GasSensor *itsGasSensor;
};

/* constructors and destructors */
void DisplayClient_Init(DisplayClient *const me);
void DisplayClient_Cleanup(DisplayClient *const me);

/* operations */
void DisplayClient_accept(void *p_me, struct GasData *g);
void DisplayClient_alarm(DisplayClient *const me, char *alarmMsg);
void DisplayClient_register(DisplayClient *const me);
void DisplayClient_show(DisplayClient *const me);
struct GasData *DisplayClient_getItsGasData(const DisplayClient *const me);
void DisplayClient_setItsGasData(DisplayClient *const me, struct GasData *p_GasData);
struct GasSensor *DisplayClient_getItsGasSensor(const DisplayClient *const me);
void DisplayClient_setItsGasSensor(DisplayClient *const me, struct GasSensor *p_GasSenor);

DisplayClient *DisplayClient_Create(void);
void DisplayClient_Destroy(DisplayClient *const me);


#endif // _DISPLAYCLIENT_H
