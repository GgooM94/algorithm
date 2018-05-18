#include<iostream>
#include<algorithm>
#include<vector>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	vector<int>input(N + 1);
	vector<int>DP(N + 1, 0);

	for (int i = 1; i <= N; i++)
		cin >> input[i];

	DP[1] = input[1];

	for (int i = 1; i < input.size(); i++) {
		for (int j = 1; j <= i; j++) {
			if (i - j >= 0)
				DP[i] = max(DP[i], DP[i - j] + input[j]);
		}
	}
	cout << DP[N];
}