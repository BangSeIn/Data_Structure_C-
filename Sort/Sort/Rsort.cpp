#include <iostream>
#include "Rsort.h"
using namespace std;

void RadixSort(Data* a, int n) {
	Data res[SIZE], max = 0;
	int digit = 1;
	//Find the biggest data to set digit
	for (int i = 0; i < n; i++) {
		if (a[i] > max) max = a[i]; 
	}

	while (max / digit > 0) {
		int bucket[10] = { 0 };
		for (int i = 0; i < n; i++) bucket[a[i] / digit % 10]++;
		for (int i = 1; i < 10; i++) bucket[i] += bucket[i - 1];
		for (int i = n - 1; i >= 0; i--) {
			res[--(bucket[a[i] / digit % 10])] = a[i];
			//res's (bucket[a[i] / exp %10]])th index must be (bucket[a[i]/exp%10]])-1

		}
		for (int i = 0; i < n; i++) a[i] = res[i];


		digit *= 10;
	}
}


