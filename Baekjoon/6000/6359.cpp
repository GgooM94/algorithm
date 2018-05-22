#include<iostream>
using namespace std;

bool DP[101] = { 0 };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, N;

	cin >> T;
	while (T--)
	{
		int cnt(0);
		cin >> N;
		for (int i = 1; i <= N; i++) {
			DP[i] = 1;
		}

		for (int i = 2; i <= N; i++) {
			for (int j = i; j <= N; j += i) {
				if (DP[j] == 1)DP[j] = 0;
				else DP[j] = 1;
			}
		}
		for (int i = 1; i <= N; i++) {
			if (DP[i] == 1) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}