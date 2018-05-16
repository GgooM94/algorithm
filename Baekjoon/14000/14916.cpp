#include<iostream>
#include<vector>
#include<algorithm>
#define MAXN 987654321
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	vector<int>arr(N + 1, MAXN);
	int coins[2] = { 2,5 };
	arr[0] = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 2; j++) {
			if (coins[j] > i)continue;

			arr[i] = min(arr[i], arr[i - coins[j]] + 1);

		}
	}
	if (arr[N] == MAXN) {
		cout << -1;
	}
	else {
		cout << arr[N];
	}
}