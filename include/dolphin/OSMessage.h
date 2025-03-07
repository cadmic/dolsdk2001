#ifndef _DOLPHIN_OSMESSAGE_H_
#define _DOLPHIN_OSMESSAGE_H_

struct OSMessageQueue {
    struct OSThreadQueue queueSend;
    struct OSThreadQueue queueReceive;
    void * msgArray;
    long msgCount;
    long firstIndex;
    long usedCount;
};

void OSInitMessageQueue(struct OSMessageQueue * mq, void * msgArray, long msgCount);
int OSSendMessage(struct OSMessageQueue * mq, void * msg, long flags);
int OSReceiveMessage(struct OSMessageQueue * mq, void * msg, long flags);
int OSJamMessage(struct OSMessageQueue * mq, void * msg, long flags);

#endif // _DOLPHIN_OSMESSAGE_H_
