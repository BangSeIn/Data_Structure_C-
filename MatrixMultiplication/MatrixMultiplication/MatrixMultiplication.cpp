#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;

	int** a = new int* [x];
	for (int i = 0; i < x; i++)
		a[i] = new int[y];

	vector<vector<int>> b(y, vector<int>(z, 0));
	vector<vector<int>> c(x, vector<int>(z, 0));

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < z; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			for (int k = 0; k < z; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < z; j++) {
			cout << c[i][j] << " ";
		}
		cout << '\n';
	}

}