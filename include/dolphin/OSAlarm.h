#ifndef _DOLPHIN_OSALARM_H_
#define _DOLPHIN_OSALARM_H_

#include <dolphin/OSContext.h>
#include <dolphin/os.h>

typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(OSAlarm *alarm, OSContext *context);

struct OSAlarm
{
    OSAlarmHandler handler;
    u32 tag;
    OSTime fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTime period;
    OSTime start;
};

void OSInitAlarm(void);
void OSCreateAlarm(OSAlarm *alarm);
void OSSetAlarm(OSAlarm *alarm, OSTime tick, OSAlarmHandler handler);
void OSCancelAlarm(OSAlarm *alarm);

#endif // _DOLPHIN_OSALARM_H_
