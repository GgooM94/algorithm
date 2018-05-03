#include<iostream>
#include<algorithm>

int coins[101] = { 0 };
int DP[10001] = { 0 };
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	for (int i = 0; i < n; i++) {
		if (coins[i] > 10000)continue;
		DP[coins[i]]++;
		for (int j = coins[i] + 1; j <= k; j++) {
			DP[j] += DP[j - coins[i]];
		}
	}
	cout << DP[k];
}