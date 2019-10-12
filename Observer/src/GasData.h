#if !defined(_GASDATA_H)
#define _GASDATA_H

typedef struct GasData GasData;
struct GasData {
    unsigned int flowRate;
    unsigned int N2Conc;
    unsigned int O2Conc;
};

/* constructors and destructors */
void GasData_Init(GasData *const me);
void GasData_Cleanup(GasData *const me);


GasData *GasData_Create(void);
void GasData_Destroy(GasData *const me);
#endif // _GASDATA_H
