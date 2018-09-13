#include<iostream>
using namespace std;
#define SIZE 101
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int map[SIZE][SIZE] = { 0, };
	int res[SIZE] = { 0, };
	int N;
	int x1, y1, w, h;

	cin >> N;
	for (int k = 1; k <= N; k++) {
		cin >> x1 >> y1 >> w >> h;

		for (int i = y1; i < y1 + h; i++)
		{
			for (int j = x1; j < x1 + w; j++) {
				map[i][j] = k;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (map[i][j] > 0)
				res[map[i][j] - 1]++;
		}
	}
	for (int i = 0; i < N; i++)
		cout << res[i] << '\n';
}

/*
TestCase
2
0 0 10 10
2 2 6 6

답
64
36
*/