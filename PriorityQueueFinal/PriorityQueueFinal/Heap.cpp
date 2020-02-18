#include "Heap.h"

int GetParent(int i) { return i / 2; }
int GetLC(int i) { return i * 2; }
int GetRC(int i) { return GetLC(i) + 1; }

void Init(Heap* h, PriComp pc) {
	h->NumData = 0;
	h->pc = pc;
}

int GetHigh(Heap* h, int idx) {
	if (GetLC(idx) > h->NumData) return 0;
	else if (GetLC(idx) == h->NumData) return GetLC(idx);
	else {
		if (h->pc(h->Arr[GetLC(idx)], h->Arr[GetRC(idx)]) < 0) return GetRC(idx);
		else return GetLC(idx);
	}

}
int IsEmpty(Heap* h) {
	if (h->NumData == 0) return 1;
	else return 0;
}
void Insert(Heap* h, Data data) {
	int idx = h->NumData + 1;
	while (idx != 1) {
		if (h->pc(data, h->Arr[GetParent(idx)]) < 0) break;
		else {
			h->Arr[idx] = h->Arr[GetParent(idx)];
			idx = GetParent(idx);
		}
	}
	h->Arr[idx] = data;
	h->NumData += 1;
}

Data Remove(Heap* h) {
	Data ret = h->Arr[1]; Data last = h->Arr[h->NumData];
	int parent = 1; int child;
	while (child = GetHigh(h, parent)) {
		if (h->pc(last, h->Arr[child]) >= 0)
			break;
		else {
			h->Arr[parent] = h->Arr[child];
			parent = child;
		}
	}
	h->Arr[parent] = last;
	h->NumData -= 1;

	return ret;


}