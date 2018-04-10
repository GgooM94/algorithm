#include<iostream>
#include<vector>
#include<algorithm>

int arr[50][50];
int M, N, K, cnt(0);
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
void search(int x, int y) {
	if (x <0 || y <0 || x > M - 1 || y > N - 1)
		return;
	if (arr[y][x] == 0 || arr[y][x] == 2)
		return;
	if (K == 0)
		return;

	arr[y][x] = 2;
	search(x + dx[0], y + dy[0]);
	search(x + dx[1], y + dy[1]);
	search(x + dx[2], y + dy[2]);
	search(x + dx[3], y + dy[3]);
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, X, Y;
	int i, j;
	cin >> T;

	while (T--)
	{
		cin >> M >> N >> K;
		cnt = 0;
		for (i = 0; i < M; i++)
			for (j = 0; j < N; j++)
				arr[i][j] = 0;

		for (i = 0; i < K; i++) {
			cin >> X >> Y;
			arr[Y][X] = 1;
		}
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				if (arr[i][j] == 1)cnt++;
				search(j, i);
			}
		}
		cout << cnt << "\n";
	}
}