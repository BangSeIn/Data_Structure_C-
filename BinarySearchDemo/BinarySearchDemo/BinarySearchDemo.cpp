#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//*ATTENTION* this search method only works in Sorted-data Array
//if search failed, return approximation without #include <cstdlib>

int BinarySearch(int* Arr, int size, int search) {
	int first = 0, last = size-1; 
	int mid;
	int almost = INT_MAX, a,b;
	while (first <= last) {
		mid = (last + first) / 2;
		a = search - Arr[mid]; if (a < 0) a *= -1;
		b = search - almost; if (b < 0) b *= -1;
		if (Arr[mid] == search) {
			cout << "Search succeed : ";
			return Arr[mid];
		}
		else {
			if (a < b) almost = Arr[mid];
			
				if (Arr[mid] < search)
					first = mid + 1;
				else
					last = mid - 1;
			
		}

	}
	cout << "Search faild, Approximation is : ";
	return almost;
}

int main() {
	int n, s;
	cout << "Set the size of Array : ";
	cin >> n;
	int* Arr = new int[n+1];
	cout << "\nSet Each Datas of Array\n";
	for (int i = 0; i < n; i++) {
		cin >> Arr[i];
	}
	cout << "Type input to search : ";
	cin >> s;
	cout << BinarySearch(Arr, n-1, s) << endl;
}



