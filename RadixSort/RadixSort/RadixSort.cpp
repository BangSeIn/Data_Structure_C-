#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#define size 1001


void RadixSort(int *arr, int n) {
    int* bucket = new int[size]; int count = 0;
    for (int i = 0; i < size; i++) { bucket[i] = 0; }
    
    for (int i = 0; i < n; i++) {
        for (int x = 1; x < size; x++) {
            if (arr[i] == x)
                bucket[x]++;
        }
    }
    for (int x = 1; x < size; x++) {
        
        while (bucket[x] > 0) {
            arr[count] = x;
            bucket[x]--;
            count++;
        }

    }

    cout << "\nSorted : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "   ";
    

}

int main()
{
    cout << "Set the number of elements to Sort : ";
    int NumberOfdata; cin >> NumberOfdata;
    int* arr = new int[NumberOfdata];
    cout << "Set each element's value\n->";
    for (int i = 0; i < NumberOfdata; i++)
        cin >> arr[i];
    RadixSort(arr, NumberOfdata);
    

}
