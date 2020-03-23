#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
int DP[500][2];
int ret[500][500];

int ans(int x, int y) {
	if (ret[x][y] > 0) return ret[x][y];
	if (y - x < 1) return 0;
	int m = INT_MAX;
	for (int k = x; k < y; k++) {
		m = min(m, (DP[x][0] * DP[k][1] * DP[y][1]) + ans(x, k) + ans(k + 1, y));
	}

	return ret[x][y] = m;
}

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> DP[i][0] >> DP[i][1];
	}

	cout << ans(0, N - 1);
	return 0;
}