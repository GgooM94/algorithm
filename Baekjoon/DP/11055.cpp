#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int DP[1001] = { 0, };
	int N,i,j,sumMax;
	cin >> N;
	vector<int>arr(N);
	
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}

	DP[0] = sumMax = arr[0];
	for (i = 1; i < N; i++) {
		DP[i] = arr[i];
		for (j = 0; j < N; j++) {
			if (arr[j] < arr[i]) {
				DP[i] = max(DP[i], DP[j] + arr[i]);
			}
		}
		sumMax = max(sumMax, DP[i]);
	}
	cout << sumMax;
}