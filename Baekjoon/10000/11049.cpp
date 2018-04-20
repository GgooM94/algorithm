#include<iostream>
#include<algorithm>
#define BIG 987654321

int N, r, c;
int i, j;
int DP[501][501] = { 0 };
int D[501];
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (i = 0; i < N; i++) {
		cin >> r >> c;
		D[i] = r;
		if (i == N - 1)
			D[i + 1] = c;
	}
	for (i = 1; i <= N; i++)
		DP[i][i] = 0;

	for (int L = 1; L <= N-1;L++) {
		for (i = 1; i <= N - L; i++) {
			j = i + L;
			DP[i][j] = BIG;

			for (int k = i; k <= j - 1; k++) {
				DP[i][j] = min(DP[i][j], DP[i][k] + DP[k + 1][j] + D[i-1]*D[k]*D[j]);
			}
		}
	}
	cout << DP[1][N];
}