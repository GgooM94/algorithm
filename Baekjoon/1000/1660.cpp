#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, tmp(0);
	cin >> N;
	vector<int>DP(N + 1, 987654321);
	vector<int>coins;

	for (int i = 1; tmp + i <= N; i++) {
		coins.push_back(tmp + i);
		tmp += i;
	}
	for (int i = 1; i < coins.size(); i++) {
		coins[i] += coins[i - 1];
	}

	DP[0] = 0;
	DP[1] = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < coins.size(); j++) {
			if (i < coins[j])break;
			DP[i] = min(DP[i], DP[i - coins[j]] + 1);
		}
	}
	cout << DP[N];
}