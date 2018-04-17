#include<iostream>
#include<algorithm>
#include<vector>
int N, K,i,j;
long long DP[1001][1001];
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;
	for (i = 1; i <= N; i++) {
		DP[i][0] = 1;
		DP[i][i] = 1;
		DP[i][1] = i;

		for (j = 2; j <= i; j++) {
			DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j])%10007;
		}
	}
	cout << DP[N][K];
}