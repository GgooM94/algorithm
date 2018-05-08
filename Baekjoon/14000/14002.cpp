#include<iostream>
#include<algorithm>
#include<vector>

int arr[1001] = { 0 };
int DP[1001] = { 0 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	DP[0] = 1;

	for (int i = 1; i < N; i++) {
		DP[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				DP[i] = max(DP[i], DP[j] + 1);
			}
		}
	}

	int index(0);
	for (int i = 0; i < N; i++) {
		if (DP[index] < DP[i]) {
			index = i;
		}
	}

	vector<int>res;
	res.push_back(arr[index]);

	int tmp = DP[index] - 1;

	for (int i = index - 1; i >= 0; i--) {
		if (DP[i] == tmp) {
			res.push_back(arr[i]);
			tmp--;
		}
	}

	cout << DP[index] << '\n';
	for (int i = res.size() - 1; i >= 0; i--)
		cout << res[i] << ' ';
}