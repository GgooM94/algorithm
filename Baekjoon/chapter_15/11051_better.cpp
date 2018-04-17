#include<iostream>
#define MOD 10007
int N, K, i, j;
int DP[1001] = { 0 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;
	for (i = 1; i <= N; i++) {
		DP[i] = 1;
		for (j = i-1; j > 1; j--) {
			DP[j] = (DP[j] + DP[j - 1])% MOD;
		}
		DP[j] = i;
	}
	cout << DP[K];
}