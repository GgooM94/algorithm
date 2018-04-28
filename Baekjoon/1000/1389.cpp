#include<iostream>
#include<algorithm>
#define MAXN 987654321
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, A, B;
	int arr[101][101] = { 0 };
	int res[101] = { 0 };
	cin >> N >> M;

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			if (i != j)arr[i][j] = MAXN;
		}
	}
	while (M--)
	{
		cin >> A >> B;
		arr[A][B] = 1;
		arr[B][A] = 1;
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
			}
		}
	}

	int minN(MAXN), index;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			res[i] += arr[i][j];
		}
		if (minN > res[i]) {
			minN = res[i];
			index = i;
		}
	}
	cout << index;
}