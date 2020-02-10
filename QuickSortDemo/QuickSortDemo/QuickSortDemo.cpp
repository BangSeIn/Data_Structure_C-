#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 999
using namespace std;

int a[SIZE];

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void QuickSort(int first, int last) {
	if (first >= last) return; //Array is empty
	//else
	int key = first;		int tmp;
	int left = first + 1; int right = last;
	while (left <= right) {
		while (left <= last && a[left] <= a[key])left++;
		while (right > first && a[right] >= a[key])right--;
		//Since It is the Key Element,
		//don't include FIRST in loop.
		if (right < left) swap(a[key], a[right]); //1)
		else swap(a[left], a[right]);
	}

	//after all, 1) must be done at the last, so..
	QuickSort(first, right - 1);
	QuickSort(left + 1, last);

}
int main()
{
	int n;
	cout << "Give the size of Array : "; cin >> n;
	cout << "\nNow give values of each elements" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Element " << i + 1 << "st is : ";
		cin >> a[i];
		cout << endl;
	}
	cout << endl;
	QuickSort(0, n - 1);
	cout << "Sorted : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
	return 0;
}


