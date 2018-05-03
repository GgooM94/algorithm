#include<iostream>
#include<algorithm>
#define STATE 3

int arr[10001] = { 0 };
int DP[STATE][10001];

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	DP[0][1] = 0;
	DP[1][1] = arr[1];
	DP[2][1] = arr[1];

	DP[0][2] = arr[1];
	DP[1][2] = arr[2];
	DP[2][2] = arr[1] + arr[2];

	for (int i = 3; i <= N; i++) {
		DP[0][i] = max({ DP[0][i - 1], DP[1][i - 1], DP[2][i - 1] });
		DP[1][i] = max({ DP[0][i - 2], DP[1][i - 2], DP[2][i - 2] }) + arr[i];
		DP[2][i] = max(DP[0][i - 1], DP[1][i - 1]) + arr[i];
	}
	cout << max({ DP[0][N], DP[1][N], DP[2][N] });
}