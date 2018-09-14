#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<long long>arr(N + 1);
	vector<long long>DP(N + 1);

	DP[0] = 1;
	DP[1] = 1;

	for (int i = 2; i <= N; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
	}
	cout << DP[N];
}