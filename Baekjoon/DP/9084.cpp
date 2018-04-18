#include<iostream>
#include<memory.h>
#define MAXN 10001
int T, N, M, i, j;
int arr[21] = { 0 };
int DP[MAXN] = { 0 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;
	while (T--)
	{
		memset(DP, 0, sizeof(DP));
		cin >> N;

		for (i = 1; i <= N; i++) {
			cin >> arr[i];
			DP[arr[i]]++;
			for (j = arr[i]+1; j <= MAXN; j++) {
				DP[j] += DP[j - arr[i]];
			}
		}
		cin >> M;
		cout << DP[M] << "\n";
	}
}