#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <limits>
#define SIZE 999
using namespace std;

int a[SIZE];

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int n, min, index;
	cout << "Give the size of Array : "; cin >> n;
	cout << "\nNow give values of each elements"<<endl;
	for (int i = 0; i < n; i++) {
		cout << "Element " << i+1 << "st is : ";
		cin >> a[i];
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		min = INT_MAX;
		for (int j = i; j < n; j++) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		swap(a[i], a[index]);
	}
	cout << "Sorted : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	return 0;
}
