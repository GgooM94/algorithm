#include<iostream>
using namespace std;
#define SIZE 10
#define MAPSIZE 101
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, x, y;
	bool map[MAPSIZE][MAPSIZE] = { 0, };

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		for (int h = 0; h < SIZE; h++) {
			for (int w = 0; w < SIZE; w++) {
				map[y + h][x + w] = 1;
			}
		}
	}

	int cnt(0);
	for (int i = 0; i < MAPSIZE; i++) {
		for (int j = 0; j < MAPSIZE; j++) {
			if (map[i][j])
				cnt++;
		}
	}
	cout << cnt;
}