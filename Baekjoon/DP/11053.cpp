#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int DP[1001] = { 0, };

	int N, i, j,lengthMax(1);
	cin >> N;
	vector<int>arr(N);
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	DP[0] = 1;
	for (i = 1; i < N; i++) {
		DP[i] = 1;
		for (j = 0; j < i; j++) {
			if (arr[j] < arr[i])
				DP[i] = max(DP[i], DP[j] + 1);
		}
		lengthMax = max(lengthMax, DP[i]);
	}
	cout << lengthMax;
}