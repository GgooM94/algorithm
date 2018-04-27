#include<iostream>
#include<algorithm>
#include<memory.h>
using namespace std;

int com, N, i, j, k;
int x, y;
bool arr[101][101] = { 0 };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	memset(arr, 1, sizeof(arr));

	cin >> com >> N;

	for (i = 0; i < N; i++) {
		cin >> x >> y;
		arr[x][y] = arr[y][x] = 0;
	}

	for (k = 1; k <= com; k++) {
		for (i = 1; i <= com; i++) {
			for (j = 1; j <= com; j++) {
				arr[i][j] = min(arr[i][j], max(arr[i][k], arr[k][j]));
			}
		}
	}

	int cnt(0);
	for (i = 2; i <= com; i++) {
		if (arr[1][i] != 1)
			cnt++;
	}
	cout << cnt;
}