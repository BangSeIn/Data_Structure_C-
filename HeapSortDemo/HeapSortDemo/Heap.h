#pragma once
#ifndef  HEAP_H
#define HEAP_H
#define SIZE 100

typedef int Data;
typedef int PriComp(Data d1, Data d2);

struct Heap {
	PriComp* pc;
	int NumData;
	Data Arr[100];
};

void Init(Heap* h, PriComp pc);
int IsEmpty(Heap* h);
void Insert(Heap* h, Data data);
Data Remove(Heap* h);

#endif // ! HEAP_H
