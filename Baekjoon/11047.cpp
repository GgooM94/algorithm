#include<iostream>
#include<vector>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, K, cnt(0), i;

	cin >> N >> K;
	vector<int> coins(N);
	for (i = 0; i < N; i++) {
		cin >> coins[i];
	}

	for (i = N - 1; i >= 0; i--) {
		cnt += K / coins[i];
		K %= coins[i];
	}
	cout << cnt;
}