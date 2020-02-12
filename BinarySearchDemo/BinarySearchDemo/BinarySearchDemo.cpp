#include <iostream>
#include "Bsearch.h"
using namespace std;

//*ATTENTION* this algorithm only works in Sorted-data Array

int main() {
	int n; Data s;
	cout << "Set the size of Array : ";
	cin >> n;
	Data* Arr = new Data[n];
	cout << "\nSet Each Datas of Array\n";
	for (int i = 0; i < n; i++) {
		cin >> Arr[i];
	}
	cout << "Type input to search : ";
	cin >> s;
	BinarySearch(Arr, 0, n - 1, s);
}