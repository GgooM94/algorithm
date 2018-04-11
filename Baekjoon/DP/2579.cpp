#include<iostream>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[301] = { 0, };
	int DP[301] = { 0, };
	int N;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= N; i++) {
		if (i < 3) {
			DP[i] = arr[i] + DP[i-1];
		}
		else {
			DP[i] = max(DP[i - 2] + arr[i], DP[i - 3] + arr[i - 1] + arr[i]);
		}
	}
	cout << DP[N];
}