#pragma once
#ifndef PRIORITY_QUEUE
#define	PRIORITY_QUEUE
#include "Heap.h"

typedef Heap PQueue;
typedef Data Qdata;

void Qinit(PQueue* pq, PriComp cp);
int QIsEmpty(PQueue* pq);
void Enque(PQueue* pq, Qdata data);
Data Deque(PQueue* pq);

#endif // !PRIORITY_QUEUE
