#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int DP[1001] = { 0 };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, res(0);
	cin >> N;
	vector<int>arr;
	arr.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	DP[0] = 1;
	for (int i = 1; i < N; i++) {
		DP[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				DP[i] = max(DP[j] + 1, DP[i]);
			}
		}
		res = max(res, DP[i]);
	}
	cout << res;
}