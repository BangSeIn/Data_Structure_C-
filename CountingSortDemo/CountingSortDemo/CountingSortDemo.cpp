#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define MAX 10001
using namespace std;

typedef int Data;


Data arr[MAX];
int Size, cur;

int main() {
	

	cin >> Size;
	for (int i = 0; i < Size; i++) {
		cin >> cur; arr[cur]++;
	}
	for (int i = 0; i < MAX; i++) {
		while (arr[i] != 0) {
			cout << i << " "; arr[i]--;
		}
	}




	return 0;
}