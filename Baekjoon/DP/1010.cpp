#include<iostream>
#include<algorithm>
#include<vector>
int DP[31][31] = { 0, };
int i, j;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T, N, M;
	cin >> T;

	for (i = 1; i < 31; i++) {
		DP[i][1] = i;
		DP[i][i] = 1;
	}

	while (T--)
	{
		cin >> N >> M;
		for (i = 2; i <= M; i++) {
			for (j = 2; j <= i; j++) {
				DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j];
			}
		}
		cout << DP[M][N] << endl;
	}
}