#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N;

	vector<int> arr(N + 1);
	vector<vector<bool>>DP(N + 1, vector<bool>(N + 1));

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= N; i++) {
		DP[i][i] = true;
	}

	for (int i = 1; i <= N - 1; i++) {
		if (arr[i] == arr[i + 1])
			DP[i][i + 1] = true;
	}

	for (int k = 3; k <= N; k++) {
		for (int i = 1; i <= N - k + 1; i++) {
			int j = i + k - 1;
			if (arr[i] == arr[j] && DP[i + 1][j - 1])
				DP[i][j] = true;
		}
	}

	cin >> M;

	int begin, end;
	for (int i = 0; i < M; i++) {
		cin >> begin >> end;
		cout << DP[begin][end] << '\n';
	}
}