#include<iostream>
typedef long long ll;

int arr[101][101] = { 0 };
ll DP[101][101] = { 0 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	DP[0][0] = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 0)continue;
			if (arr[i][j] + j < N) {
				DP[i][j + arr[i][j]] += DP[i][j];
			}
			if (arr[i][j] + i < N) {
				DP[i + arr[i][j]][j] += DP[i][j];
			}
		}
	}
	cout << DP[N - 1][N - 1];
}