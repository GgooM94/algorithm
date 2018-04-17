#include<iostream>
#include<algorithm>
int DP[1000001] = {0,};
int N,i;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (i = 2; i <= N; i++) {
		DP[i] = DP[i - 1] + 1;
		if (i % 3 == 0)
			DP[i] = min(DP[i], DP[i / 3] + 1);
		if (i % 2 == 0)
			DP[i] = min(DP[i], DP[i / 2] + 1);
	}
	cout << DP[N];
}
