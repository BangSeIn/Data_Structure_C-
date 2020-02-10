#define _CRT_SECURE_NO_WARNINGS
#include <limits>
#include <iostream>
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
	int n, index;
	cout << "Give the size of Array : "; cin >> n;
	cout << "\nNow give values of each elements" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Element " << i + 1 << "st is : ";
		cin >> a[i];
		cout << endl;
	}

	//Inserted Sort
	for (int i = 0; i <n-1;i ++) {
		for (int j = i; j >= 0; j--) {
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
		}
	}
	
	//Show sorted array
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}

}