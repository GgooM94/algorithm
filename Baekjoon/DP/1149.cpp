#include<iostream>
#include<vector>
#include<algorithm>
int DP[1001][3] = { 0 };
int N, i, j;
int R, G, B;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (i = 1; i <= N; i++) {
		cin >> R >> G >> B;
		DP[i][0] = min(DP[i-1][1], DP[i-1][2])+R;
		DP[i][1] = min(DP[i - 1][0], DP[i - 1][2]) + G;
		DP[i][2] = min(DP[i - 1][0], DP[i - 1][1]) + B;
	}
	cout << min(min(DP[N][0], DP[N][1]), DP[N][2]);
}