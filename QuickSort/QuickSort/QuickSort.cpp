#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void QuickSort(int arr[], int first, int last) {
	int pivot = arr[first];
	int low = first +1;	int high = last;
	while (low < high) {
		while (arr[low] < pivot && low <= last)
		{
			low++;
		}
		while (arr[high] > pivot&& high > first)
		{
			high--;
		}
		
		//If this if() is not included, arr[low] and arr[high] will be swaped even when low >= high
		if(low<high)  
		swap(arr[low], arr[high]);
	}
	swap(arr[first], arr[high]);
	int pv = high;
	if (pv > first) QuickSort(arr, first, pv - 1);
	if (pv < last) QuickSort(arr, pv + 1, last);
}
int main()
{
	int n; cin >> n;
	int* arr = new int[n+1];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	QuickSort(arr, 0, n-1);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " "; cout << endl;
}
