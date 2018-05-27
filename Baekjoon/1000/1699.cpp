#include<iostream>
#include<algorithm>
#include<vector>
const int INF = 987654321;
int num[317] = { 0, };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int>DP(100001, INF);

	for (int i = 1; i <= 316; i++) {
		num[i] = i*i;
	}

	int N;
	cin >> N;
	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;
	for (int i = 3; i <= N; i++) {
		DP[i] = DP[i - 1] + 1;
		for (int j = 1; j <= 316; j++) {
			if (i < num[j])break;
			DP[i] = min(DP[i], DP[i - num[j]] + 1);
		}
	}
	cout << DP[N];
}