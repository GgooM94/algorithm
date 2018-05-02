#include<iostream>
#include<vector>
#include<algorithm>

int const MAXN = 987654321;

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int>coins(n);
	vector<int>DP(10001, MAXN);
	DP[0] = 0;
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < n; j++) {
			if (coins[j] <= i) {
				DP[i] = min(DP[i], DP[i - coins[j]] + 1);
			}
		}
	}
	if (DP[k] == MAXN)
		cout << -1;
	else
		cout << DP[k];
}