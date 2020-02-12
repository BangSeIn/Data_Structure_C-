#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#define SIZE 10000
using namespace std;
typedef int Data;

void swap(Data& x, Data& y) {
	Data tmp = x;
	x = y;
	y = x;
}

struct PQueue {
	Data Heap[SIZE];
	int last = 0;
};

void Push(PQueue& pq, Data data) {
	if (pq.last >= SIZE) return; // Queue is Full
	//else
	pq.Heap[pq.last] = data;
	int cur = pq.last;
	int parent = (pq.last - 1) / 2;
	//Construct Queue after pushing new data
	while (cur > 0 && pq.Heap[parent] < pq.Heap[cur]) {
		swap(pq.Heap[parent], pq.Heap[cur]);
		cur = parent;
		parent = (parent - 1) / 2;
	}
	pq.last++;
}

Data Pop(PQueue& pq) {
	//Does not work, need to be fixed

	if (pq.last == 0) return -999;//Queue is Empty
	//else
	Data ret = pq.Heap[0];
	pq.Heap[0] = pq.Heap[--(pq.last)];
	pq.Heap[(pq.last) + 1] = -999;
	int parent = 0;
	int child = 1;
	//Rearrange Queue after popping data

	while (child < pq.last) { 
		//if left child exists
		if (child + 1 < pq.last) {
			if (pq.Heap[child] < pq.Heap[child + 1]) 
				child++;
			else
				child = child;
			}
		}

	if (pq.Heap[child] > pq.Heap[parent]) {
		swap(pq.Heap[child], pq.Heap[parent]);
		parent = child;
		child *= 2;
	}

		return ret;
		
}

