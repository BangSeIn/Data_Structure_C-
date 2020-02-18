#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Heap.h"
using namespace std;

int Datacmp(int i, int j) {
	return(j - i);
}

void HeapSort(Data arr[], int size, PriComp pc) {
	Heap hp;
	int i;

	Init(&hp, pc);

	for (int i = 0; i < size; i++) {
		Insert(&hp, arr[i]);
	}

	for (int i = 0; i < size; i++) {
		arr[i] = Remove(&hp);
	}


	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}
}

int main()
{	
	int s; cin >> s;
	Data* SortArr = new Data[s];
	for(int i = 0; i < s; i++) {
		cin >> SortArr[i];
	}
	HeapSort(SortArr, s, Datacmp);

}
