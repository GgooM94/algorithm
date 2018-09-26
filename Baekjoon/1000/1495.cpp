#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, S, M;
	cin >> N >> S >> M;

	vector<int>sound(N);
	for (int i = 0; i < N; i++) {
		cin >> sound[i];
	}

	vector<vector<bool>>DP(N + 1, vector<bool>(M + 1));
	DP[0][S] = true;

	for (int i = 0; i < DP.size() - 1; i++) {
		for (int j = 0; j < DP[i].size(); j++) {
			if (DP[i][j] == true) {
				if (j - sound[i] >= 0) {
					DP[i + 1][j - sound[i]] = true;
				}
				if (j + sound[i] <= M) {
					DP[i + 1][j + sound[i]] = true;
				}
			}
		}
	}

	for (int i = M; i >= 0; i--) {
		if (DP[N][i] == true) {
			cout << i << '\n';
			break;
		}
		if (i == 0 && DP[N][i] == false) {
			cout << "-1\n";
		}
	}
}