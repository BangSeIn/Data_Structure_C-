#define _CRT_NO_SECURE_WARNINGS
#include <iostream>
#include "Rsort.h"

int main() {
	Data a[SIZE];
	int n;
	cin >> n;
	for (int i = 0;  i < n; i++) {
		cin >> a[i];
	}
	RadixSort(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	return 0;
}
