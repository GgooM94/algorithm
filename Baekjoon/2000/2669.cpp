#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	bool arr[101][101] = { 0 };
	int x1, y1, x2, y2;
	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = y1; j < y2; j++) {
			for (int k = x1; k < x2; k++) {
				arr[j][k] = 1;
			}
		}
	}

	int cnt(0);
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			cnt += arr[i][j];
		}
	}
	cout << cnt;
}