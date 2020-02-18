#include "PriorityQueue.h"
#include "Heap.h"

void Qinit(PQueue* pq, PriComp cp) {
	Init(pq, cp);
}
int QIsEmpty(PQueue* pq) {
	return IsEmpty(pq);
}
void Enque(PQueue* pq, Qdata data) {
	Insert(pq, data);
}
Data Deque(PQueue* pq) {
	return Remove(pq);
}
