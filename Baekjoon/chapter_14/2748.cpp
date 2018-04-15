#include<iostream>
long long  DP[91] = { 0,1 };
int N, i;

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (i = 2; i <= N; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
	}
	cout << DP[N];
}